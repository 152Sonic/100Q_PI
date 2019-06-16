#include <stdio.h>

/* a uma função 
   int elimRep (int v[], int n) 
   que recebe um vector v com n inteiros e elimina 
   as repetições. 
   A função deverá retornar o número de elementos 
   do vector resultante.
   Por exemplo, se o vector v contiver nas suas 
   primeiras 10 posições os números
   {1, 2, 3, 2, 1, 4, 2, 4, 5, 4}
   a invocação elimRep (v,10) deverá retornar 5 e 
   colocar nas primeiras 5 posições do vector os 
   elementos {1,2,3,4,5}.
*/
   int temrep (int v[], int n, int x){
       int i;
       for(i=0;i<n;i++)
       {
           if (v[i]==x) return 1;
       }
       return 0;
   }
   
   int elimRep (int v[], int N) {
       int i,j;
       
       for(i=0;i<N;i++)
       {
           if (temrep (v,i,v[i]))
           {
               for (j=i;j<N;j++) v[j]=v[j+1];
               N--;
               i--;
           }
       }

       return N;
   }
