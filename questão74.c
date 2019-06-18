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

LInt somasAcL (LInt l) {
    if (l==NULL) return NULL;
    
    int soma=0;
    LInt s=newLInt (0,NULL);
    LInt aux=s;
    
    while (l!=NULL)
    {
        soma+=l->valor;
        aux->prox=newLInt (soma,NULL);
        aux=aux->prox;
        l=l->prox;
    }
    
    aux=s;
    s=s->prox;
    free (aux);
    return s;
}
    
