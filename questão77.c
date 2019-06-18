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

LInt parte (LInt l){
  
    if (l==NULL || l->prox==NULL) return NULL;
   
    LInt parInicio=newLInt (0,NULL);
    LInt imparInicio=newLInt (0,NULL);
    
    LInt par=parInicio;
    LInt impar=imparInicio;
    
    int i;
    
    for(i=1;l!=NULL;i++)
    {
        if (i%2==0)
        {
            par->prox=l;
            par=par->prox;
            l=l->prox;
            par->prox=NULL;
        }
        else
        {
            impar->prox=l;
            impar=impar->prox;
            l=l->prox;
            impar->prox=NULL;
        }
    }
     LInt aux=parInicio;
     parInicio=parInicio->prox;
     free(aux);
     
     aux=imparInicio;
     imparInicio=imparInicio->prox;
     free(aux);
     l=imparInicio;
     return parInicio;
}
    
    
    
