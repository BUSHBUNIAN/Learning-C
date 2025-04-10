#include<stdio.h>

/* Valid TYPE DECLARATION  INSTRUCTION and their OUTPUTS

Here the value for 'a' is '22' whcich is assigned by the programmer or coder

The value for 'b' is 'a+3'('a' is already declared hence compiler won't throw any error) i.e '22+3' i.e '25'

The value for 'c' is unassigned but the variable is declared using a comma hence the compiler won't throw any error. The same thing can be
written as ' int c; ' in the next line. Since the programmer or coder has only declared however not assigned any value to the variable ' c ' ,
if we ask to print the value for the variable 'c' the the computer will assign a random value in the output window */

int main()

{
    int a=22;
    int b=a+3,c;
    printf("Value of a=%d\n",a); // a=22
    printf("Value of b=%d\n",b); // b=25
    printf("Value of c=%d\n",c); // c=4194432
    return 0;
}