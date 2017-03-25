#include "sourcecode.h"

sourceCode::sourceCode()
{
}

sourceCode::sourceCode(std::string str)
{
    setSource(str);
}

int sourceCode::length() const{
    return source.length();
}

void sourceCode::setSource(std::string str){
    source.append(str);
}

char sourceCode::getNextChar(){
    i++;
    if(i < length()){
        return charAt();
    }
    return 0;
}

void sourceCode::jumpToStart(){
    i=0;
}

void sourceCode::jumpToEnd(){
    i=length()-1;
}

void sourceCode::jumpNext(){
    jump(i+1);
}

void sourceCode::jump(int i){
        this->i=i;
}

/*
 * Where is the index
 * @return int
 */
int sourceCode::getIndex() const{
    return i;
}

std::string sourceCode::getSource() const{
    return source;
}

/*
 * Add a character with the source code
 */
void sourceCode::append(char c){
    source.push_back(c);
}

void sourceCode::append(std::string str){
    source.append(str);
}

/*
 * Remove a character of the source code
 * @param char c
 */
void sourceCode::removeChar(int i){
    source.erase(i,1);
    if(i < this->i)
        i--;
}

/*
 * Empty source code
 * @param char c
 */
void sourceCode::empty(){
    jumpToStart();
    source.clear();
}

char sourceCode::charAt() const{
    return source[i];
}

char sourceCode::charAt(int i) const{
    return source[i];
}
