#include "abin.h"

/* Defina uma função "void removeMaiorA (ABin *)" que remove o maior elemento
 de uma árvore binária de procura. */
void removeMaiorA (ABin *a) {
    if (*a==NULL) return;
    
    ABin aux=*a,prev;
    
    if ((*a)->dir==NULL)
    {
        *a=(*a)->esq;
        free(aux);
        return;
    }
    
    while (aux->dir!=NULL)
    {
        prev=aux;
        aux=aux->dir;
    }
    
    prev->dir=aux->esq;
    free(aux);
}
