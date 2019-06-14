/*
  Defina uma função "void strrev (char s[])" que inverte uma string.
*/
void strrev (char s[]) {
    int i,j;
    char c[1000];
    
    for(i=0;s[i];i++)c[i]=s[i];
    c[i]='\0';
    for(j=0;i>=0;j++)
    {
        s[j]=c[i-1];
        i--;
    }
    s[j]=c[i];
    j++;
    s[j]='\0';
}
