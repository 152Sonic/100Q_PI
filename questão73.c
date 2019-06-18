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

LInt arrayToList (int v[], int N){
    if (N==0) return NULL;
    LInt l=newLInt (v[0],NULL);
    LInt curr=l;
    int i;
    
    for (i=1;i<N;i++)
    {
        curr->prox=newLInt (v[i],NULL);
        curr=curr->prox;
    }
    return l;
}
