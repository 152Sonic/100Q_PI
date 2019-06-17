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

LInt reverseL (LInt l){
    LInt aux, prev=NULL;
    if (l==NULL) return NULL;
    else if (l->prox==NULL) return l;
    aux=l->prox;
    
    while (aux!=NULL)
    {
        l->prox=prev;
        prev=l;
        l=aux;
        aux=aux->prox;
    }
    l->prox=prev;
    return l;
}
