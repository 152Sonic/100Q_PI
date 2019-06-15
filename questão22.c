/*
  Defina uma função "int contida (char a[], char b[])" que testa se todos
  os caracteres da primeira string também aparecem na segunda. Por exemplo,
  contida "braga" "bracara augusta" deve retornar verdadeiro enquanto que
  contida "braga" "bracarense" deve retornar falso.
*/
int contida (char a[], char b[]) {
    int i,j=0;
    
    for (i=0;a[i] && b[j];i++)
    {
        for (j=0;b[j];j++)
        {
            if (a[i]==b[j]) break;
        }
    }
    if (b[j]=='\0') return 0;
    else return 1;
}
   
