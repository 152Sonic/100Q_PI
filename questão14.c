/*
  Defina uma função "char charMaisfreq (char s[])" que determina qual o
  caracter mais frequente numa string. A função deverá retornar 0 no caso
  de s ser a string vazia.
*/
int contaiguais (char *s, char c)
{
    int i,r=0;
    for(i=0;s[i];i++)
    {
        if(s[i]==c) r++;
    }
    return r;
}


char charMaisfreq (char s[]) {
    int i,j,m=0;
    char r;
    if (s[0]=='\0') return 0;
    
    for(i=0;s[i];i++)
    {
        if (contaiguais(s,s[i])>m)
        {
            m=contaiguais (s,s[i]);
            r=s[i];
        }
    }
   
    return r;
}
