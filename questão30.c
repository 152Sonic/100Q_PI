#include <stdio.h>

/* Defina uma função 
   int menosFreq (int v[], int N) 
   que recebe um vector v com N elementos 
   ordenado por ordem crescente e retorna 
   o menos frequente dos elementos do vector.
   Se houver mais do que um elemento nessas 
   condições deve retornar o que começa por 
   aparecer no índice mais baixo.
*/
   int menosFreq (int v[], int N){
       int i,j, min=v[0], n=N, cont;
       
       for (i=0;i<N;i++)
       {
           cont=0;
           for(j=0;j<N;j++)
           {
               if (v[j]==v[i]) cont++;
           }
           if (cont<n)
           {
               min=v[i];
               n=cont;
           }
       }
       return min;
   }
   
