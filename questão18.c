#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
  Defina uma função "int maiorSufixo (char s1 [], char s2 [])" que calcula
  o compri- mento do maior sufixo comum entre as duas strings.
*/
int maiorSufixo (char s1 [], char s2 []) {
    int i,j,r=0;
    
    for (i=strlen(s1)-1,j=strlen(s2)-1;s1[i]==s2[j] && i>=0;i--,j--) r++;
    
    return r;
}
   
 
