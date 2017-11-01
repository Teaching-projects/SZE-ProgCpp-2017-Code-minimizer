#ifndef CSSMINIFYPROC_H
#define CSSMINIFYPROC_H

#include "defminifyproc.h"
#include "sourcecode.h"

class cssMinifyProc : public defMinifyProc
{
public:
	cssMinifyProc(); //Test miatt
    cssMinifyProc(sourceCode);
    void minimize();

private:
    bool specSelectorStart(char c);
    bool specSelectorEnd(char c);

};

#endif // CSSMINIFYPROC_H
