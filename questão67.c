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

LInt cloneRev (LInt l){
    LInt clone=NULL;
    
    while (l!=NULL)
    {
        clone=newLInt (l->valor,clone);
        l=l->prox;
    }
    return clone;
}
