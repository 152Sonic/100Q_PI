#include <stdio.h>

/* aa função 
   int retiraNeg (int v[], int N) 
   que retira os números negativos de um vector 
   com N inteiros. 
   A função deve retornar o número de elementos 
   que não foram retirados.
*/ 
   int retiraNeg (int v[], int N){
       int r = 0,i,j=0;
       char c[N];
       
       for(i=0;i<N;i++) c[i]=v[i];
       c[i]=v[i];
       
       for(i=0;i<N;i++)
       {
           if (c[i]>=0)
           {
               v[j]=c[i];
               j++;
               r++;
           }
       }
       return r;
   }
