#include "abin.h"
#include <stdio.h>
#include <stdlib.h>

ABin newABin (int r, ABin e, ABin d){
	ABin new = (ABin) malloc (sizeof (struct nodo));

	if (new!=NULL){
		new->valor = r;
		new->esq   = e;
		new->dir   = d;
	}
	return new;
}

int altura (ABin a){
    
    if(a==NULL) return 0;
    
    int esquerda=altura (a->esq);
    int direita=altura (a->dir);
    
    if (esquerda>direita) return (esquerda+1);
    else return (direita+1);
}
    
