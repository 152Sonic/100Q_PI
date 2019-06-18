#include <stdio.h>
#include <stdlib.h>

LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

LInt cloneL (LInt l){
  LInt clone;
  LInt auxc=clone,new;

  while (l!=NULL)
  {
      new=newLInt (l->valor,NULL)
      auxc->prox=new;
      auxc=auxc->prox;
      l=l->prox;
  }
  return clone->prox;
