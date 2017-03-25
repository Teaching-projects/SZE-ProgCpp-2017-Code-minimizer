#ifndef JSMINIFYPROC_H
#define JSMINIFYPROC_H

#include "defminifyproc.h"
#include "sourcecode.h"

class jsMinifyProc : public defMinifyProc
{
public:
	jsMinifyProc();
    jsMinifyProc(sourceCode source);
    void minimize();

private:
    void isFunctionEnd();
};

#endif // JSMINIFYPROC_H
