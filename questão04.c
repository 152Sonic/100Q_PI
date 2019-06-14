#include <stdio.h>
// define a function that computes how many 1's are used in 
// the (binary) representation of a given (unsigned) integer.

int bitsUm (unsigned int x){
    int r=0;
    while (x>0)
    {
        if (x%2==1) r++;
        x=x/2;
    }
    
    
    return r;
}
