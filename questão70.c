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

int length (LInt l){
    int i=0;
    while (l){ l=l->prox;i++;}
    return i;
}

void freeL(LInt l){
    LInt aux;
    
    while (l){
        aux=l;
        l=l->prox;
        free(aux);
    }
}

int drop (int n, LInt *l){
    if (*l==NULL) return 0;
    
    int i,len= length(*l);
    LInt aux=*l;
    
    if (len<=n)
    {
        freeL (aux);
        *l=NULL;
        return len;
    }
    
    for (i=0;i<n;i++)
    {
        aux=*l;
        *l=(*l)->prox;
        free(aux);
    }
    return n;
}
