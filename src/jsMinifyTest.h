#ifndef JSMINIFYTEST_H
#define JSMINIFYTEST_H

#include <string>
#include "jsminifyproc.h"
#include "sourcecode.h"

class jsMinifyTest
{
public:
	void setSource(std::string str);
	void startTest(void);
	std::string getSource(void);

private:
	std::string str;
	jsMinifyProc jsMin;
	sourceCode source;
};

#endif // JSMINIFYTEST_H