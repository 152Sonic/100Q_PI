#include "abin.h"

/* Defina uma função "ABin cloneAB (ABin)" que cria uma cópia de uma árvore.
*/
ABin cloneAB (ABin a) {
    if (a==NULL) return NULL;
    ABin clone=a;
    
    clone->esq=cloneAB (a->esq);
    clone->dir=cloneAB(a->dir);
    
    return clone;
}
