/*
  Defina uma função "int maiorPrefixo (char s1 [], char s2 [])" que calcula
  o comprimento do maior prefixo comum entre as duas strings.
*/
int maiorPrefixo (char s1 [], char s2 []) {
    int i=0,r=0;
    while (s1[i]==s2[i]) 
    {
        r++;
        i++;
    }
    return r;
}
