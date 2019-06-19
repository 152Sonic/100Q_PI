#include "abin.h"

/* Defina uma função "ABin somasAcA (ABin a)" que, dada uma árvore de inteiros,
 calcula a árvore das somas acumuladas dessa árvore.
 A árvore calculada deve ter a mesma forma da árvore recebida como argumento e
 em cada nodo deve conter a soma dos elementos da sub-árvore que aí se inicia. */


ABin somasAcA (ABin a) {
    if (a==NULL) return NULL;
    
    ABin newEsq= somasAcA(a->esq);
    ABin newDir=somasAcA (a->dir);
    int resEsq, resDir;
    
    ABin b= (ABin) malloc (sizeof ABin);
    b->esq= newEsq;
    b->dir=newDir;
    
    if (newEsq==NULL) resEsq=0;
    else resEsq=newEsq->valor;
    
    if(newDir==NULL) resDir=0;
    else resDir=newDir->valor;
    
    b->valor= a->valor + resEsq + resDir;
    
    return b;
}
