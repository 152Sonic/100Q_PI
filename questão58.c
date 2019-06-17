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

void splitQS (LInt l, int x, LInt *mx, LInt *Mx){
     *mx=newLInt (0,NULL),*Mx=newLInt (0,NULL);
    LInt auxm=*mx,auxM=*Mx;
    
    while (l!=NULL)
    {
        if (l->valor <x)
        {
            auxm->prox=newLInt (l->valor,NULL);
            auxm=auxm->prox;
            l=l->prox;
        }
        else 
        {
            auxM->prox=newLInt (l->valor,NULL);
            auxM=auxM->prox;
            l=l->prox;
        }
    }
    
    *mx=(*mx)->prox;
    *Mx=(*Mx)->prox;
}
