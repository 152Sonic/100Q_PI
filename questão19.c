  do maior sufixo de s1 que é um prefixo de s2. Por exemplo
  "sufPref("batota","totalidade")" deve dar como resultado 4, uma vez que a
  string "tota" é um sufixo de "batota" e um prefixo de "totalidade".
*/
int sufPref (char s1[], char s2[]) {
    int i=0,j=0,r=0;
    
    while (s1[i])
    {
        if (s2[j]=='\0') return 0;
        else if (s1[i]==s2[j])
        {
            r++;
            i++;
            j++;
        }
        else i++;

    }
    return r;
}
