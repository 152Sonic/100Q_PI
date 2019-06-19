#include "abin.h"

/* Apresente uma definição da função "int deProcura (ABin a)" que testa se uma
 árvore é de procura. */
int minvalue (ABin a){
    
    if (a->esq==NULL) return a->valor;
    else return minvalue (a->esq);
}

int maxvalue (ABin a){
    
    if (a->dir==NULL) return a->valor;
    else return maxvalue (a->dir);
}

int deProcura (ABin a) {
    if (a==NULL) return 1;
    
    if (a->esq!=NULL && maxvalue (a->esq) > a->valor) return 0;
    
    else if (a->dir!=NULL && minvalue (a->dir) < a->valor) return 0;
    
    else if (!(deProcura (a->esq)) || !(deProcura (a->dir))) return 0;
    
    return 1;
}
