#include "abin.h"

/* Defina uma função "int iguaisAB (ABin a, ABin b)" que testa se duas
 árvores são iguais (têm os mesmos elementos e a mesma forma). */
int iguaisAB (ABin a, ABin b) {
    if (a==NULL && b==NULL) return 1;
    else if ((a==NULL && b!=NULL) || (a!=NULL && b==NULL)) return 0;
    
    if (a->valor != b->valor) return 0;
    else return iguaisAB ((a->esq),(b->esq)) * iguaisAB ((a->dir),(b->dir));

}
