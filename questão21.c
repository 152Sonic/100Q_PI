/*
  Defina uma função "int contaVogais (char s[])" que retorna o número
  de vogais da string s. Não se esqueça de considerar tanto maiúsculas
  como minúsculas.
*/
int contaVogais (char s[]) {
    int i=0,r=0;
    
    while (s[i])
    {
        if (s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u' || s[i]== 'A' || s[i]== 'E' || s[i]== 'I' || s[i]== 'U' || s[i]== 'O')
        {
            r++;
        }
        i++;
    }
    return r;
}
    
 
