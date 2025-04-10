#include<stdio.h>

/* Invalid TYPE DECLARATION  INSTRUCTION and their OUTPUTS
Here the value for 'a' , 'b' , 'c' are 1 whcich is assigned by the programmer or coder
It's an Invalid instruction because you can't declare and assign a single value to multiple variables */

int main()

{
    int a=b=c=1; // You can see the error sign in variables 'a' and 'b'
    printf("Value of a=%d\n",a);
    printf("Value of b=%d\n",b); 
    printf("Value of c=%d\n",c);
    return 0;
}