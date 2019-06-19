#include "abin.h"

/* Defina uma função "int dumpAbin (ABin a, int v[], int N)" que dada uma
 árvore "a", preenche o array "v" com os elementos da árvore segundo uma
 travessia inorder. A função deverá preencher no máximo "N" elementos e
 retornar o número de elementos preenchidos.  */
int dumpAbin (ABin a, int v[], int N) {
    if (a==NULL || N==0) return 0;
    
    else
    {
        int pos=dumpAbin (a->esq, v, N-1);
        *(v+pos)=a->valor;
        return pos + 1 + dumpAbin (a->dir, v+pos+1, N-1-pos);
    }
}
