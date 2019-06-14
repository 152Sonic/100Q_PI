/*
  Apresente uma definição da função pré-definida em C "char *strcpy (char *dest, char source[])"
  que copia a string source para dest retornando o valor desta última.
*/
char *mystrcpy(char s1[], const char s2[]) {
    int i;
    for(i=0;s2[i];i++)
    {
        s1[i]=s2[i];
    }
    s1[i]='\0';
    return s1;
}
