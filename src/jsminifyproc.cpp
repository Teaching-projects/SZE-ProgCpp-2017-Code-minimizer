#include "jsminifyproc.h"
#include "commentremove.h"
#include <regex>
#include <string>

jsMinifyProc::jsMinifyProc() { //Test miatt 
	resetName();
}

jsMinifyProc::jsMinifyProc(sourceCode source) {
	resetName();
	setOldSource(source);
}

void jsMinifyProc::resetName(void) {
	variables = "`";
}

void jsMinifyProc::minimize(void)
{
    /* Járjuk be a forráskódot. */
    for (oldSource.jumpToStart(); isNextChar(); oldSource.jumpNext()) {
                /* Vizsgáljuk az adott karaktert. */
                switch (oldSource.charAt()) {
                    case '\'': // Aposztrof
                        quotationMarks('\'');
                        break;
                    case '"':// Macskaköröm
                        quotationMarks('"');
                        break;
                    default:
                        /* Ha fehérkaraktert találunk. */
                        if (isWhiteSpace(oldSource.charAt()) != -1) {
                            /* Futtassuk egészen addig a ciklusunkat, ameddig a kövektező karakter nem lesz fehér karakter. */
							while (isWhiteSpace(isNextChar() ? oldSource.charAt(oldSource.getIndex() + 1) : 'a') != -1) {
								oldSource.jumpNext();
							}
                            /* Mentsük az eddigi minimalizált forráskód hosszát. */
                            int newSourceLength = newSource.length();

                            /* Ha ez a hossz nem nulla, és az eredeti forráskódunknak sem értünk a végére. */
                            if (newSourceLength != 0 && isNextChar()) {
                                /*
                                 * Nézzük meg, hogy az új forráskód utolsó eleme fehér karakter-e,
                                 * és hogy az eredeti forráskód következő karaktere betű-e.
                                 * Ha igen, adjunk hozzá a tömörített forráskódhoz egy space-t.
                                 */
                                if (isWord(newSource.charAt(newSourceLength - 1)) && isWord(oldSource.charAt(oldSource.getIndex() + 1))) {
                                    newSource.append(' ');
                                }
                            }
                        } else {
                            /* Más esetben adjuk hozzá a karaktert a tömörített forráskódhoz. */
                            newSource.append(oldSource.charAt());
                            isFunctionEnd();
                        }
                };
            }

}

void jsMinifyProc::isFunctionEnd(void)
{
    if(oldSource.charAt() == '}'){
        std::string str="";
        int k=1;

        for(int j=0; (k+oldSource.getIndex()) < oldSource.length()-1 && j < 9; k++){
            if(isWhiteSpace(oldSource.charAt(oldSource.getIndex()+k)) == -1 || j > 5){
                str+=oldSource.charAt(oldSource.getIndex() + k);
                j++;
            }
        }
        /*Regex*/
        std::regex re("^(function\\W)$|^(this\\W.*)$");
        if (std::regex_match(str,re)) {
            newSource.append(';');
            newSource.append(str);
            oldSource.jump(oldSource.getIndex()+k);
        }
    }
}

void jsMinifyProc::nameGenerator (int i){
	if (variables[i] == '\0') {
		variables += 'a';
		return;
	}

	if (variables[i] == 'Z') {
		variables[i] = 'a';
		nameGenerator(i + 1);
	}

	if (variables[i] == 'z') {
		variables[i] = 'A';
		return;
	}

	variables[i]++;
}

void jsMinifyProc::getName(const std::string partString,const std::string regex) //kigyűjti a neveket, map kell
{
	std::string s = partString;
	std::smatch m;
	
	std::regex e(regex);

	while (std::regex_search(s, m, e)) {
		if (m.size() >= 2) {
			nameGenerator(0);
			container[variables] = m[1];
		}
		s = m.suffix().str();
		
	}
	//map key-value cout
	//std::vector<std::string> v; 
	//for (std::map<std::string, std::string>::iterator it = container.begin(); it != container.end(); ++it) {
	//	v.push_back(it->first);
	//	std::cout << it->first << "-" << container[it->first] << "\n";
	//}
}

std::string jsMinifyProc::nameReplace(std::string str) {	

	std::vector<std::string> v;

	for (std::map<std::string, std::string>::iterator it = container.begin(); it != container.end(); ++it) {
		v.push_back(it->first);
		std::regex e("([(}) ;\\t\\n]?)(" + container[it->first] + ")(\\W+)");
		
		str = std::regex_replace(str, e, "$1"+ it->first +"$3"); //replace
	}
	return str;
}

void jsMinifyProc::minimizeName(std::string regex) {
	int beforeC = 0;

	for (oldSource.jumpToStart(); isNextChar(); oldSource.jumpNext()) {
		int tmp;
		std::string str;
		switch (oldSource.charAt()) {
		case '\'':
			changeName('\'', &beforeC, regex);
			break;
		case '"':
			changeName('"', &beforeC, regex);
			break;
		}
	}

	if (oldSource.length() > beforeC) {
		std::string str = oldSource.partString(beforeC, oldSource.getIndex() - beforeC);
		getName(str, regex); //substring miatt

		newSource.append(nameReplace(str));
	}
}

void jsMinifyProc::minimizeVariableName(void) {
	container.clear();
	minimizeName(vregex);

}

void jsMinifyProc::changeName(char c, int *beforeC,std::string regex) {
	std::string str = oldSource.partString(*beforeC, oldSource.getIndex() - *beforeC);
	getName(str, regex); //substring miatt
						
	newSource.append(nameReplace(str));
	quotationMarks(c);

	*beforeC = oldSource.getIndex() + 1;
}

void jsMinifyProc::minimizeFunctionName(void) {
	container.clear();
	minimizeName(fregex);
}