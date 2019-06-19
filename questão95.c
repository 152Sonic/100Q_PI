#include "abin.h"

/* Apresente uma definição não recursiva da função
 "int lookupAB (ABin a, int x)" que testa se um elemento pertence a uma árvore
 binária de procura. */
 
int lookupAB (ABin a, int x) {
    if (a==NULL) return 0;
    
    if (a->valor==x) return 1;
    else if (x>a->valor) return lookupAB (a->dir,x);
    else if (x<a->valor) return lookupAB (a->esq,x);

}

