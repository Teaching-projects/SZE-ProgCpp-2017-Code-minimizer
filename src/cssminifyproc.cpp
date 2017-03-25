#include "cssminifyproc.h"

cssMinifyProc::cssMinifyProc() {

}

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

    for (oldSource.jumpToStart(); isNextChar(); oldSource.jumpNext()) {
       switch (oldSource.charAt()) {
            case '{':
                stat = true;
                newSource.append(oldSource.charAt());
                break;
            case '}':
                stat = false;
                newSource.append(oldSource.charAt());
                break;
            case '\'':
                quotationMarks('\'');
                break;
            case '"':
                quotationMarks('"');
                break;
            default:
                if (isWhiteSpace(oldSource.charAt()) != -1) {
                    int j = oldSource.getIndex() - 1;
					while (isWhiteSpace(isNextChar() ? oldSource.charAt(oldSource.getIndex() + 1) : 'a') != -1) { /*Tesztelés kimutatta, hogy nem lesz úgy jó, mert akkor is növeli az indexet, ha hamis volt*/
						oldSource.jumpNext();
					}
                    if(j > -1 && isNextChar()) {
                        if(stat) {
                            if(isWord(oldSource.charAt(j)) && isWord(oldSource.charAt(oldSource.getIndex() + 1))) {
                                newSource.append(' ');
                            }
                        } else if ((isWord(oldSource.charAt(j)) || specSelectorEnd(oldSource.charAt(j)))
                                    && (isWord(oldSource.charAt(oldSource.getIndex() + 1)) || specSelectorStart(oldSource.charAt(oldSource.getIndex() + 1)))) {
                            newSource.append(' ');
                        }
                    }
                } else {
                    newSource.append(oldSource.charAt());
                }
        }
    }
}
