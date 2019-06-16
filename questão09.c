/*
  Apresente uma definição da função pré-definida em C "int strcmp (char s1[], char s2[])"
  que compara (lexicograficamente) duas strings. O resultado deverá ser:
   • 0, se as strings forem iguais;
   • <0, se s1<s2;
   • >0, se s1>s2.
*/
int mystrcmp(char s1[], char s2[]) {
    int i;
    for (i=0; s1[i]==s2[i] && s1[i];i++);
    return (s1[i]-s2[i]);
}
