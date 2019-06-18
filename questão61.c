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
int remrep (LInt *l, int x){
    int k=1,r;
    LInt aux=*l,prev;
    
    while (aux!=NULL)
    {
        if (aux->valor==x)
        {
            if(k==0)
            {
                aux=aux->prox;
                prev->prox=aux;
                r++;
            }
            else
            {
                prev=aux;
                aux=aux->prox;
                k--;
            }
        }
        else 
        {
            prev=aux;
            aux=aux->prox;
        }
    }
    return r;
}
 

int removeDups (LInt *l){
    LInt curr=*l;
    int r=0,x;
    
    while (curr!=NULL)
    {
        x=remrep (&curr, curr->valor);
        r+=x;
        curr=curr->prox;
    }
    return r;
}
    
    
    
    
    
    
    
