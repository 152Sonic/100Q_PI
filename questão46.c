#include <stdio.h>
/* a função 
   int cardinalMSet (int N, int v[N]) que calcula o 
   número de elementos do multi-conjunto v.
*/

   int cardinalMSet (int N, int v[N]){
   	  int i,r=0;
   	  for(i=0;i<N;i++) r+=v[i];
   	  return r;
   }
