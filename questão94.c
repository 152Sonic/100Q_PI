#include "abin.h"

/* Apresente uma definição não recursiva da função
 "int addOrd (ABin *a, int x)" que adiciona um elemento a uma árvore binária de
 procura. A função deverá retornar "1" se o elemento a inserir já existir na
 árvore ou "0" no outro caso. */
int addOrd (ABin *a, int x) {
    
    ABin new= (ABin) malloc (sizeof (ABin));
    new->valor=x;
    new->esq=NULL;
    new->dir=NULL;
    
    if (*a==NULL)
    {
        *a=new;
        return 0;
    }
    
    ABin aux=*a,prev;
    
    while (aux!=NULL)
    {
        if(x==aux->valor) return 1;
        
        prev=aux;
        
        if(x<aux->valor) aux=aux->esq;
        else aux=aux->dir;

    }
    if (x<prev->valor) prev->esq=new;
    else prev->dir=new;
    
    return 0;
}
