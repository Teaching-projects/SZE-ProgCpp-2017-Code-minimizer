#include "jsminifyproc.h"

#include <QString>

jsMinifyProc::jsMinifyProc(sourceCode source)
{
    setOldSource(source);
}

void jsMinifyProc::minimize()
{

}

void jsMinifyProc::isFunctionEnd()
{
    if(oldSource.charAt(oldSource.getIndex()) == '}'){
        QString str;
        int j=0,k=1;

        for(; (k+oldSource.getIndex()) < oldSource.length()-1 && j < 9; k++){
            if(isWhiteSpace(oldSource.charAt(oldSource.getIndex()+k)) == -1 || j > 5){
                str.append(oldSource.charAt(oldSource.getIndex() + k));
                j++;
            }
        }
        /*Regex helye*/
    }
}
