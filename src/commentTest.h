#ifndef COMMENTTEST_H
#define COMMENTTEST_H

#include <string>
#include "commentremove.h"
#include "sourcecode.h"

class commentTest
{
public:
	void setSource(std::string str);
	void startTest(void);
	std::string getSource(void);

private:
	std::string str;
	commentRemove commentMin;
	sourceCode source;
};

#endif // COMMENTTEST_H

