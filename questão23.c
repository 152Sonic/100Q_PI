#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
  Defina uma função "int palindroma (char s[])" que testa se uma palavra é
  palíndroma, i.e., lê-se de igual forma nos dois sentidos.
*/
int palindroma (char s[]) {
    int i,j;
    
    for(i=0, j=strlen(s)-1; j-i>=1;i++,j--)
    {
        if (s[i]!=s[j]) return 0;
    }
    return 1;
}
