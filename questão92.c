#include "abin.h"

/* Apresente uma definição da função "int contaFolhas (ABin a)" que dada uma
 árvore binária de inteiros, conta quantos dos seus nodos são folhas, i.e.,
 que não têm nenhum descendente. */
int contaFolhas (ABin a) {
    if (a==NULL) return 0;
    if (a->esq==NULL && a->dir==NULL) return 1;
    else if (a->esq==NULL && a->dir!=NULL) return contaFolhas (a->dir);
    else if (a->esq!=NULL && a->dir==NULL) return contaFolhas (a->esq);
    else if (a->esq!=NULL && a->dir!=NULL) return contaFolhas(a->esq)+contaFolhas (a->dir);
    
}
