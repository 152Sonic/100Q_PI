#include "vizinhos.h"


int vizinhos (Posicao p, Posicao pos[], int N) {
    int i,n=0;
    
    for (i=0;i<N;i++)
    {
        if (pos[i].x==p.x && pos[i].y==p.y+1)n++;
        else if (pos[i].x==p.x && pos[i].y==p.y-1)n++;
        else if (pos[i].y==p.y && pos[i].x==p.x+1)n++;
        else if (pos[i].y==p.y && pos[i].x==p.x-1)n++;
    }
    return n;
}
    
