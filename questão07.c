/*
  Apresente uma definição da função pré-definida em C "char *strcat (char s1[], char s2[])"
  que concatena a string s2 a s1 (retornando o endereço da primeira).
*/

char *mystrcat(char s1[], char s2[]) {
    int i,j;
    for (i=0;s1[i];i++) s1[i];
    for (j=0;s2[j];j++)
    {
        s1[i]=s2[j];
        i++;
    }
    s1[i]='\0';
    return s1;
}
