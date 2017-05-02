#ifndef DEFMINIFYPROC_H
#define DEFMINIFYPROC_H

#include "sourcecode.h"

class defMinifyProc
{
public:
    /*
     * Set the soureCode class
     */
    void setOldSource(sourceCode);

    /*
     * Get the source code class
     */
    sourceCode getSource();

protected:
    /*
     * @var newSource / The new source code
     * @var oldSource / The old source code
     */
    sourceCode newSource;
    sourceCode oldSource;

    /*
     * There is more character?
     * @overload
     * @param int i / Which index
     * @return boolean
     */
    bool isNextChar();
    bool isNextChar(int i);

    /*
     * Macskakörmök kiküszöbölése. Ezek között a karakterek között lévő
     * szövegeket, nem szabad módosítani. Mivel a ' karakter és a " karakternél
     * is ugyan úgy kell eljárni, ezért az átadott paraméterben döntöm el
     * melyiket vizsgálom.
     * @param char c / Mit választok
     */
    void quotationMarks(char c);

    /*
     * Ellenőrizzük a paraméterben átadott karaktert, hogy fehér karakter-e. Ha
     * igen, térjünk vissza vele, más esetben -1-el.
     * @param char c / Ellenőrizendő karakter.
     * @return int
     */
    int isWhiteSpace(char c);

    /*
     * Ellenőrizzük hogy az átadott karakter betű-e.
     * @param char c / Ellenőrizendő karakter.
     * @return
     */
    bool isWord(char c);
};

#endif // DEFMINIFYPROC_H
