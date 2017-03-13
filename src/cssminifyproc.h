#ifndef CSSMINIFYPROC_H
#define CSSMINIFYPROC_H

#include "defminifyproc.h"
#include "sourcecode.h"

class cssMinifyProc : public defMinifyProc
{
public:
    cssMinifyProc();
    cssMinifyProc(sourceCode);
};

#endif // CSSMINIFYPROC_H
