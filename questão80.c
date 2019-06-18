#include "abin.h"

/* Defina uma função "void mirror (ABin *)" que inverte uma árvore (sem criar
 uma nova árvore). */
void mirror (ABin *a) {
    ABin aux=NULL;
    
    if (*a!=NULL)
    {
        aux=(*a)->esq;
        (*a)->esq=(*a)->dir;
        (*a)->dir=aux;
        
        mirror (&((*a)->dir));
        mirror (&((*a)->esq));
    }
}
    
  
