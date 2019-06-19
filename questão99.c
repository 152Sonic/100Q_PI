#include "abin.h"

/* Apresente uma definição da função "int quantosMaiores (ABin a, int x)" que,
 dada uma árvore binária de procura de inteiros e um inteiro, conta quantos
 elementos da árvore são maiores que o inteiro dado. */
int contaNodos (ABin a){
    if (a==NULL) return 0;
    else return 1+ contaNodos (a->esq) + contaNodos (a->dir);
}

int quantosMaiores (ABin a, int x) {
    if (a==NULL) return 0;
    
    if (a->valor==x) return contaNodos (a->dir);
    
    else if (a->valor>x) return 1 + quantosMaiores (a->esq,x) + contaNodos(a->dir);
    else if (x>a->valor) return quantosMaiores (a->dir,x);
}
