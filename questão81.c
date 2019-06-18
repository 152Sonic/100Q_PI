#include "abin.h"
 
/* Defina a função "LInt* inorder (ABin , LInt *)" que cria uma lista ligada
 de inteiros a partir de uma travessia "in-order" de uma árvore binária. */
LInt mynewLInt (int v,LInt t){
    
    LInt new= malloc (sizeof(struct lligada));
    
    if (new!=NULL)
    {
        new->valor=v;
        new->prox=t;
    }
    return new;
}

void acLInt (int x,LInt *l){
    
    LInt aux=(*l),new=mynewLInt (x,NULL);
    
    if ((*l)==NULL)
    {
        *l=new;
        return;
    }
    
    while (aux->prox!=NULL) aux=aux->prox;
    
    aux->prox=new;
}

void inorder (ABin a, LInt * l) {
    
    if (a!=NULL)
    {
        inorder(a->esq, l);
        acLInt (a->valor,l);
        inorder (a->dir,l);
    }
}
