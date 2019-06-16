/* Defina uma função 
   int minInd (int v[], int n) 
   que, dado um vector v com n inteiros, retorna o 
   índice do menor elemento do vector.
*/
int minInd (int v[], int n) {
   int i,r,j=0,min=v[0];
   
   for(i=0;i<n;i++)
   {
       if(v[i]<min)
       {
           min=v[i];
           j=i;
       }
   }
   
   return j;
}
