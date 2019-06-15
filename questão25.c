#include <stdio.h>
#include <string.h>
/* A função 
       int limpaEspacos (char t[])
   elimina repetições sucessivas de espaços por um único espaço.
   A função deve retornar o comprimento da string resultante.
*/

int limpaEspacos (char t[]) {
    int r=0,i,j=0;
    
    char c[strlen(t)];
    
    for (i=0;t[i];i++) c[i]=t[i];
    c[i]='\0';
    
    for (i=0;c[i];i++)
    {
        if (c[i]!= ' ')
        {
            t[j]=c[i];
            r++;
            j++;
        }
        else if (c[i]==' ' && c[i+1]!=' ')
        {
            t[j]=c[i];
            r++;
            j++;
        }
    }
    t[j]='\0';
    return r;
}
