#include "abin.h"

/* Defina a função "void preorder (ABin , LInt *)" que cria uma lista ligada
 de inteiros a partir de uma travessia "preorder" de uma árvore binária. */

LInt mynewLInt (int x, LInt l){
    
    LInt new=malloc(sizeof(struct lligada));
    
    if(new != NULL)
    {
        new->valor=x;
        new->prox=l;
    }
    return new;
}

void preorderaux (ABin a, LInt *l){
    if (a==NULL) return;
    
    LInt aux=*l;
    
    while (aux->prox!=NULL) aux=aux->prox;
    
    aux->prox=mynewLInt (a->valor,NULL);
    
    preorderaux (a->esq,l);
    preorderaux (a->dir,l);
}

void preorder (ABin a,LInt *l){
    
    *l = mynewLInt (0,NULL);
    preorderaux (a,l);
    
    LInt aux=*l;
    *l=aux->prox;
    free(aux);
}
