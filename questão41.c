/*
  Defina uma função "void addTo (int N, int M, int a [N][M], int b[N][M])"
  que adiciona a segunda matriz à primeira.
*/
void addTo(int N, int M, int a [N][M], int b[N][M]) {
    int i,j;
    int s[N][M];
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)a[i][j]+=b[i][j];
    }
    return;
}
  
