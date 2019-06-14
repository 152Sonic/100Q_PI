#include <stdio.h>
#include <string.h>

/* Defina uma função void strnoV (char s[]) que 
   retira todas as vogais de uma string.
*/

void strnoV (char t[]){
    int n=strlen(t),j,i;
    char s[n];
    strcpy (s,t);
    
    for (i=0,j=0;s[i];i++)
    {
        if (s[i]!= 'a'&&s[i]!= 'e'&&s[i]!= 'i'&&s[i]!= 'o'&&s[i]!= 'u'&&s[i]!= 'A'&&s[i]!= 'E'&&s[i]!= 'I'&&s[i]!= 'O'&&s[i]!= 'U')
        {
            t[j]=s[i];
            j++;
        }
    }
    t[j]='\0';
}

