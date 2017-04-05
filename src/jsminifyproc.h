#ifndef JSMINIFYPROC_H
#define JSMINIFYPROC_H

#include "defminifyproc.h"
#include "sourcecode.h"
#include <iostream>
#include <string>

class jsMinifyProc : public defMinifyProc
{
public:
	jsMinifyProc(); //Test miatt
    jsMinifyProc(sourceCode source);
    void minimize(void);
	void minimizeVariableName(void);
	void minimizeFunctionName(void);

private:
    void isFunctionEnd(void);
	std::string getID();
	void getVariableName();
};

#endif // JSMINIFYPROC_H
