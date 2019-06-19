#include "abin.h"

/* Defina uma função "int pruneAB (ABin *a, int l) que remove
 (libertando o espaço respectivo) todos os elementos da árvore "*a" que
 estão a uma profundidade superior a "l", retornando o número de
 elementos removidos. */
 int pruneAB (ABin *a, int l) {
     
     if (*a==NULL) return 0;
     
     if (l>0) return (pruneAB (&((*a)->esq),l-1) + pruneAB (&((*a)->dir),l-1));
    
     else
     {
        
         int res = 1+ pruneAB (&((*a)->esq),0) + pruneAB (&((*a)->dir),0);
         free(*a);
         *a=NULL
         return res;
     }

 }
