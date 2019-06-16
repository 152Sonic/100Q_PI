#include <stdio.h>

/* a função 
   int maisFreq (int v[], int N)
   que recebe um vector v com N elementos 
   ordenado por ordem crescente e retorna 
   o mais frequente dos elementos do vector.
   Se houver mais do que um elemento nessas 
   condições deve retornar o que começa por 
   aparecer no índice mais baixo.
*/
   int maisFreq (int v[], int N){
       int i, j, max=v[0], n=0, cont;
       
       for (i=0;i<N;i++)
       {
           cont=0;
           for (j=0;j<N;j++)
           {
               if (v[j]==v[i]) cont++;
           }
           if (cont>n)
           {
               max=v[i];
               n=cont;
               
           }
       }
       return max;
   }
