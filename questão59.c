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

LInt parteAmeio (LInt *l){
    LInt x=*l,y;
    int m=0,i;
    
    while (x!=NULL)
    {
        x=x->prox;
        m++;
    }
    if (m==1) return NULL;
    m=m/2;
    y=*l;
    x=y;
    
    for(i=0;i+1<m;i++) x=x->prox;
    
    *l=x->prox;
    x->prox=NULL;
    return y;

}
