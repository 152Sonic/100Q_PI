#include "abin.h"

/* Defina uma função "int freeAB (ABin a)" que liberta o espaço ocupado por
 uma árvore binária, retornando o número de nodos libertados. */
int freeAB (ABin a) {
    if(a==NULL) return 0;
    
    ABin dir=a->dir;
    ABin esq=a->esq;
    
    free(a);
    
    return (1+ freeAB(dir)+freeAB(esq));
}
