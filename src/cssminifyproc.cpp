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
                break;
            case '\'':
                quotationMarks('\'');
                break;
            case '"':
                quotationMarks('"');
                break;
            default:
                if (isWhiteSpace(oldSource.charAt(i)) != -1) {
                    int j = i - 1;
                    while (isWhiteSpace(oldSource.length() ? oldSource.charAt(i + 1) : 'a') != -1) {
                        i++;
                    }
                    if(j > -1 && oldSource.length()) {
                        if(stat) {
                            if(isWord(oldSource.charAt(j)) && isWord(oldSource.charAt(i + 1))) {
                                newSource.append(' ');
                            }
                        } else if ((isWord(oldSource.charAt(j)) || specSelectorEnd(oldSource.charAt(j)))
                                    && (isWord(oldSource.charAt(i + 1)) || specSelectorStart(oldSource.charAt(i + 1)))) {
                            newSource.append(' ');
                        }
                    }
                } else {
                    newSource.append(oldSource.charAt(i));
                }
        }
    }
}
