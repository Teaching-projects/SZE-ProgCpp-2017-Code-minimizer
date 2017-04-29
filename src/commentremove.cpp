#include <iostream>
#include "commentremove.h"

commentRemove::commentRemove() { //Teszt miatt
}

commentRemove::commentRemove(sourceCode src) {
    setOldSource(src);
}

int commentRemove::isComment(sourceCode src) {
	setOldSource(src);
	removeComment();
	return oldSource.getIndex();
}

void commentRemove::removeComment() {
    if(isNextChar()){
        switch (oldSource.charAt(oldSource.getIndex() + 1)) {
        case '/':
            do {
				oldSource.jumpNext();
            } while (isNextChar() && oldSource.charAt() != '\n');
            break;
        case '*':
            oldSource.jump(oldSource.getIndex() + 3);
            if(isNextChar()){
				while (isNextChar() && !(oldSource.charAt(oldSource.getIndex() - 1) == '*' && oldSource.charAt() == '/')) {
					oldSource.jumpNext();
				}
            }
            break;
        }
    }
}


void commentRemove::minimize(){
    for(oldSource.jumpToStart(); isNextChar(); oldSource.jumpNext()){
		int tmp;
		switch (oldSource.charAt()) {
		case '\'':
			quotationMarks('\'');
			break;
		case '"':
			quotationMarks('"');
			break;
		case '/':
			tmp = oldSource.getIndex();
			removeComment();
			if (tmp == oldSource.getIndex()) {
				newSource.append(oldSource.charAt());
			}
			break;
		default:
            newSource.append(oldSource.charAt());
        }
    }
}

