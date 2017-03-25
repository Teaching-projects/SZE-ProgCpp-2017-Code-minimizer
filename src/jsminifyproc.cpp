#include "jsminifyproc.h"
#include <regex>
#include <string>

jsMinifyProc::jsMinifyProc(sourceCode source)
{
    setOldSource(source);
}

void jsMinifyProc::minimize()
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
                            while (isWhiteSpace(isNextChar() ? oldSource.getNextChar() : 'a') != -1);
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

void jsMinifyProc::isFunctionEnd()
{
    if(oldSource.charAt(oldSource.getIndex()) == '}'){
        std::string str="";
        int k=1;

        for(int j=0; (k+oldSource.getIndex()) < oldSource.length()-1 && j < 9; k++){
            if(isWhiteSpace(oldSource.charAt(oldSource.getIndex()+k)) == -1 || j > 5){
                str.push_back(oldSource.charAt(oldSource.getIndex() + k));
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
