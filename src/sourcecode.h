#ifndef SOURCECODE_H
#define SOURCECODE_H

#include <qstringbuilder.h>

class sourceCode
{
public:
    /*
     * @constructor
     * @overload
     */
    sourceCode();
    sourceCode(QStringBuilder source);

    /*
     * The source code length
     * @return int
     */
    int length();

    /*
     * The next character of the source code
     * @return char
     */
    char getNextChar();

    /*
     * @overload
     */
    void jump();
    void jump(int i);

    /*
     * Where is the index
     * @return int
     */
    int getIndex();

    /*
     * Get source code
     * @return QStringBuilder
     */
    QStringBuilder getSource();

    /*
     * Set source code
     * @return QStringBuilder
     */
    void setSource(QStringBuilder str);

    /*
     * Add a character with the source code
     * @param char c
     */
    void appendChar(char c);

    /*
     * Remove a character of the source code
     * @param char c
     */
    void removeChar(int i);

    /*
     * Empty source code
     * @param char c
     */
    void empty();

private:
    /*
     * @var source / Source code
     * @var i / Index attribute
     */
    QStringBuilder source;
    int i;

};

#endif // SOURCECODE_H
