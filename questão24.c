#include <stdio.h>
#include <string.h>

/* a função remRep deve remover da string argumento
   todos os caracteres que se repetem sucessivamente
   deixando lá apenas uma cópia
*/

int remRep (char t []) {
    int r = 0,i,j=0;
    char c[strlen(t)];
    
    for (i=0;t[i];i++)c[i]=t[i];
    c[i]='\0';
    
    for(i=0;c[i];i++)
    {
        if (c[i]!=c[i+1])
        {
            t[j]=c[i];
            j++;
            r++;
        }
    }
    t[j]='\0';
    
    return r;
}
