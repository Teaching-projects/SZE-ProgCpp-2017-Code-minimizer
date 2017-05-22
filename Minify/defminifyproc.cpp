#include "defminifyproc.h"

void defMinifyProc::setOldSource(sourceCode sc) {
    oldSource = sc;
	newSource.empty();
}

sourceCode defMinifyProc::getSource() {
    return newSource;
}

bool defMinifyProc::isNextChar() {
    return oldSource.getIndex() < oldSource.length();
}

bool defMinifyProc::isNextChar(int i) {
    return i + 1 < oldSource.length();
}

void defMinifyProc::quotationMarks(char c) {
    newSource.append(oldSource.charAt());
    if(isNextChar()) {
        do {
            newSource.append(oldSource.getNextChar());
        } while (isNextChar() && oldSource.charAt() != c);
    }
}

int defMinifyProc::isWhiteSpace(char c) {
    if(c < 33) {
        return c;
    }
    return -1;
}


bool defMinifyProc::isWord(char c){
    return (c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58);
}
