#include<stdio.h>

/* Valid TYPE DECLARATION  INSTRUCTION and their OUTPUTS

Here the value for 'a' is '22' whcich is assigned by the programmer or coder

The value for 'b' is 'a+3'('a' is already declared hence compiler won't throw any error) i.e '22+3' i.e '25'

The value for 'c' is unassigned but the variable is declared using a comma hence the compiler won't throw any error. (The same thing can be
written as ' int c; ' in the next line.) 
Now the programmer or coder has assigned ' 2+b ' to the variable ' c ' ,
if we ask to print the value for the variable 'c' the the computer will assign ' 2+b ' i.e ' 2+25 ' i.e ' 27 ' to the variable 'c' */

int main()

{
    int a=22;
    int b=a+3,c;
    c=2+b;
    printf("Value of a=%d\n",a); // a=22
    printf("Value of b=%d\n",b); // b=25
    printf("Value of c=%d\n",c); // c=27
    return 0;
}