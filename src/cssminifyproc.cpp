#include "cssminifyproc.h"

cssMinifyProc::cssMinifyProc(sourceCode src) {
    setOldSource(src);
}

bool cssMinifyProc::specSelectorStart(char c) {
    return c == '.' || c == '#' || c == '*' || c == '[';
}

bool cssMinifyProc::specSelectorEnd(char c) {
    return c == ')' || c == ']' || c == '*';
}

void cssMinifyProc::minimize() {
    bool stat = false;

    for(int i = 0; i < oldSource.length(); i++) {
        switch (oldSource.charAt(i)) {
            case '{':
                stat = true;
                newSource.append(oldSource.charAt(i));
                break;
            case '}':
                stat = false;
                newSource.append(oldSource.charAt(i));
            case '\'':
                defMinifyProc::quotationMarks('\'');
                break;
            case '"':
                defMinifyProc::quotationMarks('"');
                break;
            case '/':
                /*Ide majd a commentremove osztályból kelleni fog egy metódus! Annak a felhasználásával lesz megoldva*/
                break;
            default:
                if (defMinifyProc::isWhiteSpace(oldSource.charAt(i)) != -1) {
                    int j = i - 1;
                    while (defMinifyProc::isWhiteSpace(oldSource.length() ? oldSource.charAt(i + 1) : 'a') != -1) {
                        i++;
                    }
                    if(j > -1 && oldSource.length()) {
                        if(stat) {
                            if(defMinifyProc::isWord(oldSource.charAt(j)) && defMinifyProc::isWord(oldSource.charAt(i + 1))) {
                                newSource.append(' ');
                            }
                        } else if ((defMinifyProc::isWord(oldSource.charAt(j)) || cssMinifyProc::specSelectorEnd(oldSource.charAt(j)))
                                    && (defMinifyProc::isWord(oldSource.charAt(i + 1)) || cssMinifyProc::specSelectorStart(oldSource.charAt(i + 1)))) {
                            newSource.append(' ');
                        }
                    }
                } else {
                    newSource.append(oldSource.charAt(i));
                }
        }
    }
}
