#ifndef COMMENTREMOVE_H
#define COMMENTREMOVE_H

#include "defminifyproc.h"
#include "sourcecode.h"

class commentRemove : public defMinifyProc
{
public:
    commentRemove(sourceCode);
    void minimize();

protected:
    int removeComment();
};

#endif // COMMENTREMOVE_H
