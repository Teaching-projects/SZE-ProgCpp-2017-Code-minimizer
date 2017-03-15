#ifndef SOURCECODE_H
#define SOURCECODE_H

#include <QString>

class sourceCode
{
public:
    /*
     * @constructor
     * @overload
     */
    sourceCode();
    sourceCode(QString str);

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
     * Jump with index
     */
    void jumpToStart();
    void jumpToEnd();
    void jump(int i);

    /*
     * @overload
     */
    char charAt();
    char charAt(int i);

    /*
     * Where is the index
     * @return int
     */
    int getIndex();

    /*
     * Get source code
     * @return QStringBuilder
     */
    QString getSource();

    /*
     * Set source code
     * @return QStringBuilder
     */
    void setSource(QString str);

    /*
     * Add a character with the source code
     * @param char c
     */
    void append(char c);
    void append(QString c);

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
    QString source;
    int i;

};

#endif // SOURCECODE_H
