#include "abin.h"

/* Defina uma função "int nivelV (ABin a, int n, int v[])" que preenche o
 vector "v" com os elementos de "a" que se encontram no nível "n". Considere
 que a raiz da árvore se encontra no nível "1". A função deverá retornar o
 número de posições preenchidas do array.  */


int nivelV (ABin a, int n, int v[]) {
    if (a==NULL) return 0;

    if (n==1) 
    {
        *v=a->valor;
        return 1;
    }
    
    else 
    {
        int pos= nivelV(a->esq,n-1,v);
        return pos+ nivelV (a->dir, n-1, v+pos);
    }
}
