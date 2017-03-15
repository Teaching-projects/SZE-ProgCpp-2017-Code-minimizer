#include "jsminifyproc.h"
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QString>

jsMinifyProc::jsMinifyProc(sourceCode source)
{
    setOldSource(source);
}

void jsMinifyProc::minimize()
{
    /* Járjuk be a forráskódot. */
            for (int i = 0; i < oldSource.length(); i++) {
                /* Vizsgáljuk az adott karaktert. */
                switch (oldSource.charAt(i)) {
                    case '\'': // Aposztrof
                        quotationMarks('\'');
                        break;
                    case '"':// Macskaköröm
                        quotationMarks('"');
                        break;
                    default:
                        /* Ha fehérkaraktert találunk. */
                        if (isWhiteSpace(oldSource.charAt(i)) != -1) {
                            /* Futtassuk egészen addig a ciklusunkat, ameddig a kövektező karakter nem lesz fehér karakter. */
                            while (isWhiteSpace(isNextChar() ? oldSource.charAt(i + 1) : 'a') != -1) {
                                i++;
                            }
                            /* Mentsük az eddigi minimalizált forráskód hosszát. */
                            int newSourceLength = newSource.length();

                            /* Ha ez a hossz nem nulla, és az eredeti forráskódunknak sem értünk a végére. */
                            if (newSourceLength != 0 && isNextChar()) {
                                /*
                                 * Nézzük meg, hogy az új forráskód utolsó eleme fehér karakter-e,
                                 * és hogy az eredeti forráskód következő karaktere betű-e.
                                 * Ha igen, adjunk hozzá a tömörített forráskódhoz egy space-t.
                                 */
                                if (isWord(newSource.charAt(newSourceLength - 1)) && isWord(oldSource.charAt(i + 1))) {
                                    newSource.append(' ');
                                }
                            }
                        } else {
                            /* Más esetben adjuk hozzá a karaktert a tömörített forráskódhoz. */
                            newSource.append(oldSource.charAt(i));
                            isFunctionEnd();
                        }
                };
            }

}

void jsMinifyProc::isFunctionEnd()
{
    if(oldSource.charAt(oldSource.getIndex()) == '}'){
        QString str="";
        int k=1;

        for(int j=0; (k+oldSource.getIndex()) < oldSource.length()-1 && j < 9; k++){
            if(isWhiteSpace(oldSource.charAt(oldSource.getIndex()+k)) == -1 || j > 5){
                str.append(oldSource.charAt(oldSource.getIndex() + k));
                j++;
            }
        }
        /*Regex*/
        QRegularExpression re("^(function\\W)$|^(this\\W.*)$");
        QRegularExpressionMatch match = re.match(str);
        if (match.hasMatch()) {
            newSource.append(';');
            newSource.append(str);
            oldSource.jump(oldSource.getIndex()+k);
        }
    }
}
