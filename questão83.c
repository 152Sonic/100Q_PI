#include "abin.h"

/* Defina a função "void posorder (ABin , LInt *)" que cria uma lista ligada
 de inteiros a partir de uma travessia "posorder" de uma árvore binária. */
 
 LInt mynewLInt (int x, LInt l){
     
     LInt new= malloc (sizeof(struct lligada));
     
     if(new!=NULL)
     {
         new->valor=x;
         new->prox=l;
     }
     return new;
 }
 
 void posorderaux (ABin a, LInt *l){
     
     if (a==NULL) return;
     
     posorderaux (a->esq,l);
     posorderaux (a->dir,l);
     
     LInt aux=*l;
     
     while (aux->prox!=NULL) aux=aux->prox;
     
     aux->prox=mynewLInt (a->valor,NULL);
 }
 
 
 
 void posorder (ABin a, LInt *l) {
    
    *l=mynewLInt (0,NULL);
    posorderaux (a,l);
    
    LInt aux=*l;
    *l=aux->prox;
    free(aux);
}
