/*
  Defina uma função "int iguaisConsecutivos (char s[])" que, dada uma string s
  calcula o comprimento da maior sub-string com caracteres iguais. Por exemplo, 
  "iguaisConsecutivos ("aabcccaac")" deve dar como resultado 3, correspondendo
  à repetição "ccc".
*/

int iguaisConsecutivos (char s[]) {
    int i, c=1,max=0;
    
    for(i=0;s[i];i++)
    {
        if (s[i]==s[i+1]) c++;
        else if (c>max) 
        {
            max=c;
            c=1;
        }
    }
    return max;
}
