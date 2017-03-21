#include "commentremove.h"

commentRemove::commentRemove(sourceCode src) {
    setOldSource(src);
}

int commentRemove::removeComment() {
    if(isNextChar()){
        switch (oldSource.charAt(oldSource.getIndex() + 1)) {
        case '/':
            do {
            } while (isNextChar() && oldSource.getIndex() != '\n');
            break;
        case '*':
            oldSource.jump(oldSource.getIndex() + 3);
            if(isNextChar()){
                while(isNextChar() && !(oldSource.charAt(oldSource.getIndex() - 1)  == '*' && oldSource.charAt() == '/'));
            }
            break;
        }
    }
    return oldSource.getIndex();
}


void commentRemove::minimize(){

}

