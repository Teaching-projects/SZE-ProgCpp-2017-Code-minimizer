#ifndef SOURCECODE_H
#define SOURCECODE_H

#include <string>

class sourceCode
{
public:
    /*
     * @constructor
     * @overload
     */
    sourceCode();
    sourceCode(std::string str);

    /*
     * The source code length
     * @return int
     */
    int length(void)const;

    /*
     * The next character of the source code
     * @return char
     */
    char getNextChar(void);

    /*
     * Jump with index
     */
    void jumpToStart(void);
    void jumpToEnd(void);
    void jumpNext(void);
    void jump(int i);

    /*
     * @overload
     */
    char charAt(void) const;
    char charAt(int i) const;

    /*
     * Where is the index
     * @return int
     */
    int getIndex(void) const;

    /*
     * Get source code
     * @return QStringBuilder
     */
	std::string toString(void) const;

    /*
     * Set source code
     * @return QStringBuilder
     */
    void setSource(std::string str);

    /*
     * Add a character with the source code
     * @param char c
     */
    void append(char c);
    void append(std::string c);

    /*
     * Remove a character of the source code
     * @param char c
     */
    void removeChar(int i);

    /*
     * Empty source code
     * @param char c
     */
    void empty(void);

	std::string partString(int begin, int num);


private:
    /*
     * @var source / Source code
     * @var i / Index attribute
     */
	std::string source;
    int i;

};

#endif // SOURCECODE_H
