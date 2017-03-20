#include "sourcecode.h"

sourceCode::sourceCode()
{
}

sourceCode::sourceCode(QString str)
{
    setSource(str);
}

int sourceCode::length() const{
    return source.length();
}

void sourceCode::setSource(QString str){
    source.append(str);
}

char sourceCode::getNextChar(){
    i++;
    if(i < length()){
        return charAt();
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
    if(i+1 < length()){
        this->i=i;
    }
}

/*
 * Where is the index
 * @return int
 */
int sourceCode::getIndex() const{
    return i;
}

QString sourceCode::getSource() const{
    return source;
}

/*
 * Add a character with the source code
 */
void sourceCode::append(char c){
    source.append(c);
}

void sourceCode::append(QString str){
    source.append(str);
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

char sourceCode::charAt() const{
    return source.at(i).toLatin1();
}

char sourceCode::charAt(int i) const{
    return source.at(i).toLatin1();
}
