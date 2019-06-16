#include <stdio.h>

/* a função
   void insere (int v[], int N, int x) 
   que insere um elemento (x) num vector ordenado.
   Assuma que as N primeiras posições do 
   vector estão ordenadas e que por isso, após a 
   inserção o vector terá as primeiras N+1 posições 
   ordenadas.
*/

   void insere (int s[], int N, int x){
    int i,j;
    
    if (x<s[N-1])
    {
        for (i=0;i<N;i++)
        {
            if (x<s[i]) 
            {
                for (j=N;j!=i;j--) s[j]=s[j-1];
                s[i]=x;
                break;
            }
        }
    }
    
    else s[N]=x;
   }
