#include "cssminifyproc.h"

cssMinifyProc::cssMinifyProc(sourceCode src) {
    setOldSource(src);
}

bool cssMinifyProc::specSelectorStart(char c) {
    return c == '.' || c == '#' || c == '*' || c == '[';
}

cssMinifyProc::specSelectorEnd(char c) {
    return c == ')' || c == ']' || c == '*';
}

/*void cssMinifyProc::minimize() {

}*/
