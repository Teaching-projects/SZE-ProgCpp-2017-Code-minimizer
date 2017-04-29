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
	void getVariableName(const std::string);
	std::string variableReplace(std::string str);

private:
	std::string variables;
	std::map<std::string, std::string> container;
	void nameGenerator(int i);
	//std::string variableReplace(std::string str);
    void isFunctionEnd(void);
	std::string getID();
	commentRemove isComment;
	//void getVariableName(const std::string);

};

#endif // JSMINIFYPROC_H
