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

void freeL (LInt l){
    LInt aux;
    
    while (l)
    {
        aux=l;
        l=l->prox;
        free(aux);
    }
}


int take (int n, LInt *l){
    if (*l==NULL) return 0;
    
    LInt aux=*l,free;
    int i;
    
    for(i=0;i<n-1 && aux;i++) aux=aux->prox;
    
    if (aux==NULL) return i;
    
    free=aux->prox;
    aux->prox=NULL;
    freeL (free);
    return i+1;
}

