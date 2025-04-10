#include<stdio.h>

/* Invalid Arithmetic Instruction

' b+c ' is not a single variable in LHS

' bc ' is not regarded as multiplication of ' b ' and ' c ' in C-programming rather it's regarded as an error 

' b^c ' is not regarded as ' b to the power c ' in C-programming it's regarded as an error */

int main()
{
    int a,b,c;
    
    b+c=a; // In LHS there should be a single variable which will store the value
    
    int a=bc; // In order to multiply we have to use ' * "  it's read as ASTERISK

    int a=b^c; // in order to calculate power of a variable we have to use a FUNCTION. For example pow(x,y) for x to the power y.
   
    return 0;
}