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

void insertOrd (LInt *l, int x){
    LInt aux=*l,prev;
    if (aux==NULL)
    {
        *l=newLInt (x,NULL);
        return;
    }
    if (x<=(*l)->valor)
    {
        *l=newLInt (x,*l);
        return;
    }
    
    while (aux!=NULL && x>aux->valor)
    {
        prev=aux;
        aux=aux->prox;
    }
    prev->prox=newLInt (x,aux);
}

    
