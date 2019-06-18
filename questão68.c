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

int maximo (LInt l){
    int max=0;
    
    while (l!=NULL)
    {
        if(l->valor >max) max=l->valor;
        l=l->prox;
    }
    return max;
}
