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

void merge (LInt *r, LInt l1, LInt l2){
    *r=newLInt (0,NULL);
    LInt aux=*r;
  
    while (l1 && l2)
    {
        if(l1->valor<l2->valor)
        {
            aux->prox=l1;
            l1=l1->prox;
            aux=aux->prox;
        }
        else
        {
            aux->prox=l2;
            l2=l2->prox;
            aux=aux->prox;
        }
    }
    if (l1==NULL) aux->prox=l2;
    else if (l2==NULL) aux->prox=l1;
    
    aux=*r;
    *r=(*r)->prox;
    free(aux);
    
}
