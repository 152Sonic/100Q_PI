#include "abin.h"

/* Apresente uma definição da função "int depthOrd (ABin a, int x)" que
 calcula o nível a que um elemento está numa árvore binária de procura ("-1"
 caso não exista). */
int depthOrd (ABin a, int x) {
    if (a==NULL) return -1;
    
    int i;
    
    for(i=1;a!=NULL;i++)
    {
        if (a->valor==x) return i;
        
        else if (x>a->valor) a=a->dir;
        else a=a->esq;
    }
    
    return -1;
}
