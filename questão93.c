#include "abin.h"

/* Defina uma função "ABin cloneMirror (ABin a)" que cria uma árvore nova, com
 o resultado de inverter a árvore (efeito de espelho). */
ABin cloneMirror (ABin a) {
    if (a==NULL) return NULL;
    
    ABin clone= (ABin) malloc (sizeof (ABin));
    clone->valor=a->valor;
    clone->esq=cloneMirror (a->dir);
    clone->dir=cloneMirror (a->esq);
    return clone;
}
