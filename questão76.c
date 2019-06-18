#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

LInt rotateL (LInt l){
    if (l==NULL || l->prox==NULL) return l;
    
    LInt curr=l,aux=l->prox;
    
    while (curr->prox!=NULL) curr=curr->prox;
    
    curr->prox=l;
    l->prox=NULL;
    return aux;
}
