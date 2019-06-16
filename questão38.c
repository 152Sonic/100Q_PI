/* a função 
   void somasAc (int v[], int Ac [], int N)
   que preenche o vector Ac com as somas acumuladas 
   do vector v. 
   Por exemplo, o elemento na posição Ac[3] deve 
   ser calculado como v[0]+v[1]+v[2]+v[3].
*/
void somasAc (int v[], int Ac [], int N){
   int i;
   Ac[0]=v[0];
   for(i=1;i<N;i++)Ac[i]=Ac[i-1]+v[i];
}
   
