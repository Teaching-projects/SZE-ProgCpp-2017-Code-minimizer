#include "sourcecode.h"

sourceCode::sourceCode()
{
   initSourceCode();
}

sourceCode::sourceCode(QString str)
{
    initSourceCode();
    setSource(str);
}

void sourceCode::initSourceCode(){
    source=new QString();
}

int sourceCode::length(){
    return source.length();
}

void sourceCode::setSource(QString str){
    source.append(str);
}

QChar sourceCode::getNextChar(){
    i++;
    if(i+1 < source.length()){
        return source.at(i);
    }
    i--;
    return 0;
}

/*
 * @overload
 */
void sourceCode::jump(){

}
void sourceCode::jump(int i){
    if(i+1 < source.length())
    this->i=i;
}

/*
 * Where is the index
 * @return int
 */
int sourceCode::getIndex(){
    return i;
}

int sourceCode::getSource(){
    return source;
}

/*
 * Add a character with the source code
 * @param char c
 */
void sourceCode::appendChar(QChar c){
    source.append(c);
}

/*
 * Remove a character of the source code
 * @param char c
 */
void sourceCode::removeChar(int i){
    source.remove(i,1);
}

/*
 * Empty source code
 * @param char c
 */
void sourceCode::empty(){
    source.remove(0,source.length());
}
