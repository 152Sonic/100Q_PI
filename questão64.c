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

void appendL (LInt *l, int x){
    LInt curr=*l;
    
    if (*l==NULL)
    {
        *l=newLInt (x,NULL);
        return;
    }
    
    while (curr->prox!=NULL) curr=curr->prox;
    
    curr->prox= newLInt (x,NULL);
}
