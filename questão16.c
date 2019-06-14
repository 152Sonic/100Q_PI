/*
  Defina uma função "int difConsecutivos (char s[])" que, dada uma string s
  calcula o comprimento da maior sub-string com caracteres diferentes. Por
  exemplo, "difConsecutivos ("aabcccaac")" deve dar como resultado 3,
  correspondendo à string "abc".
*/
int dif (int i,int j,char s[]){
    while (i<j)
    {
        if (s[i]==s[j])return 0;
        i++;
    }
    return 1;
}
int difConsecutivos (char s[]) 
{
    int i,j,d=0,res=0;
    
    for(i=0;s[i];i++)
    {
        d=0;
        for(j=i;s[j] && dif (i,j,s);j++)
        {
            d++;
        }
        if (d>res) res=d;
    }
    return res;
}

