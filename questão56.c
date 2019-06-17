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

int removeOneOrd (LInt *l, int x){
    LInt curr=*l, prev;
    
    if ((*l)==NULL) return 1;
    if ((*l)->prox==NULL)
    {
        if ((*l)->valor==x)
        {
            *l=(*l)->prox;
            free (*l);
            return 0;
        }
        else return 1;
    }
    
    while (curr!=NULL)
    {
        if(x==curr->valor)
        {
            prev->prox=curr->prox;
            free (curr);
            return 0;
        }
        else 
        {
            prev=curr;
            curr=curr->prox;
        }
        
    }
    if (curr==NULL) return 1;

}
