 /* Defina uma função int qDig (unsigned int n) 
    que calcula o número de dígitos necessários 
    para escrever o inteiro n em base decimal. 
    Por exemplo, qDig (440) deve retornar 3.
*/

int qDig (int n) {
    int r = 0;
    while (n>0)
    {
        n=n/10;
        r++;
    }
    return r;
}
