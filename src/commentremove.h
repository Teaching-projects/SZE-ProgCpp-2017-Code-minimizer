#ifndef COMMENTREMOVE_H
#define COMMENTREMOVE_H

#include "defminifyproc.h"
#include "sourcecode.h"

class commentRemove : public defMinifyProc
{
public:
	commentRemove(); //Teszt miatt
    commentRemove(sourceCode);
    void minimize();

protected:
    void removeComment();
};

#endif // COMMENTREMOVE_H
