#include <stdio.h>
/* a função 
   int intersectSet (int N, int v1[N], int v2[N], int r[N]) 
   que coloca no array r o resultado da intersecção 
   dos conjuntos v1 e v2.
*/

   int intersectSet (int N, int v1[N], int v2[N], int r[N]){
       int i;
       
       for(i=0;i<N;i++)
       {
           if  (v1[i]==1 && v2[i]==1) r[i]=1;
           else r[i]=0;
       }
       return r;
   }
