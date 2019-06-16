#include <stdio.h>

/* a função 
   int maxCresc (int v[], int N)
   que calcula o comprimento da maior sequência 
   crescente de elementos consecutivos num vector 
   v com N elementos.
   Por exemplo, se o vector contiver 10 elementos 
   pela seguinte ordem:
   {1, 2, 3, 2, 1, 4, 10, 12, 5, 4}, 
   a função deverá retornar 4, correspondendo ao 
   tamanho da sequência {1, 4, 10, 12}.
*/
   int maxCresc (int v[], int N) {
       int i, cont=1, max=1;
       
       for (i=0;i<N;i++)
       {
           if (v[i+1]>=v[i]) cont++;
           else
           {
               if (cont>max)  max=cont;
               cont=1;
           }
       }
       return max;
   }
