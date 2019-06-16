/*
  Defina uma função "int triSup (int N, int m [N][N])" que testa se uma
  matriz quadrada é triangular superior, i.e., que todos os elementos abaixo
  da diagonal são zeros.
*/

int triSup (int N, int m [N][N]) {
    int i,j;
    for (i=0;i<N;i++)
    {
        for(j=0;j<i;j++)
        {
            if(m[i][j]>0 || m[i][j<0]) return 0;
        }
    }
    return 1;
}
