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

int removeAll (LInt *l, int x){
    int r=0,flag=0;
    LInt prev,aux;
    
   while (*l!=NULL && flag==0)
   {
       if ((*l)->valor==x)
       {
           *l=(*l)->prox;
           r++;
       }
       else flag=1;
   }
   if (*l==NULL) return r;
   aux=*l;
    
    while (aux!=NULL)
    {
        if (aux->valor==x)
        {
            aux=aux->prox;
            prev->prox=aux;
            r++;
        }
        else
        {
            prev=aux;
            aux=aux->prox;
        }
    }
    
    return r;
}
