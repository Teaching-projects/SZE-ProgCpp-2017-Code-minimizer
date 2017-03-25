#ifndef CSSMINIFYTEST_H
#define CSSMINIFYTEST_H

#include <string>
#include "cssminifyproc.h"
#include "sourcecode.h"

class cssMinifyTest
{
public:
	void setSource(std::string str);
	void startTest(void);
	std::string getSource(void);

private:
	std::string str;
	cssMinifyProc cssMin;
	sourceCode source;
};

#endif // CSSMINIFYTEST_H