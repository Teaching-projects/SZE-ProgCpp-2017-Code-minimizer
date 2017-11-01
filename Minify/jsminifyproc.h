#ifndef JSMINIFYPROC_H
#define JSMINIFYPROC_H

#include "defminifyproc.h"
#include "commentremove.h"
#include "sourcecode.h"
#include <iostream>
#include <map>
#include <string>
#include <regex>

class jsMinifyProc : public defMinifyProc
{
public:
    jsMinifyProc(); //Test miatt
    jsMinifyProc(sourceCode source);
    void minimize(void);
    void minimizeVariableName(void);
    void minimizeFunctionName(void);
    void resetName(void);

private:
    std::string variables;
    std::map<std::string, std::string> container;
    void jsMinifyProc::newNameGenerator(std::string regex);
    const std::string vregex = "[(}) ;\\t\\n]?var\\s+([A-Za-z]{1}[A-Za-z0-9]*)";
    const std::string fregex = "[(}) ;\\t\\n]?function\\s+([A-Za-z]{1}[A-Za-z0-9]*)\\s*\\(";

    void changeName(char, int *,std::string);

    void nameGenerator(int i);
    void isFunctionEnd(void);
    void getName(const std::string, const std::string);
    void jsMinifyProc::minimizeName(std::string);
    std::string nameReplace(std::string str);


};

#endif // JSMINIFYPROC_H
