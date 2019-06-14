#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Defina uma função 
   void truncW (char t[], int n) 
   que dado um texto t com várias palavras 
   (as palavras estão separadas por um ou 
   mais espaços) e um inteiro n, trunca 
   todas as palavras de forma a terem no 
   máximo n caracteres.
*/

void truncW (char t[], int n){
   int i,j=0,rep=n;
   
   for(i=0;t[i];i++)
   {
      if (t[i]==' ')
      {
         t[j]=' ';
         j++;
         rep=n;
      }
      else if (rep!=0)
      {
         t[j]=t[i];
         j++;
         rep--;
      }
   }
   t[j]='\0';
}
