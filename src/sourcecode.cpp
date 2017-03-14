#include "sourcecode.h"

sourceCode::sourceCode()
{
}

sourceCode::sourceCode(QString str)
{
    setSource(str);
}

int sourceCode::length(){
    return source.length();
}

void sourceCode::setSource(QString str){
    source.append(str);
}

QChar sourceCode::getNextChar(){
    i++;
    if(i < length()){
        return source.at(i);
    }
    i--;
    return 0;
}

void sourceCode::jumpToStart(){
    i=0;
}

void sourceCode::jumpToEnd(){
    i=length()-1;
}

void sourceCode::jump(int i){
    if(i+1 < length())
    this->i=i;
}

/*
 * Where is the index
 * @return int
 */
int sourceCode::getIndex(){
    return i;
}

QString sourceCode::getSource(){
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
    if(i < this->i)
        i--;
}

/*
 * Empty source code
 * @param char c
 */
void sourceCode::empty(){
    i=0;
    source.remove(i,length());
}
