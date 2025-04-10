#include<stdio.h>

/* Invalid TYPE DECLARATION  INSTRUCTION and their OUTPUTS

Here the value for 'a' is '22' whcich is assigned by the programmer or coder

The value for 'b' is 'a+3'('a' is already declared hence compiler won't throw any error) i.e '22+3' i.e '25'

The value for 'c' is unassigned but the variable is declared using a comma hence the compiler won't throw any error. (The same thing can be
written as ' int c; ' in the next line.) 
Now the programmer or coder has assigned ' 2+b ' to the variable ' c ' , after the its declaration , in the next line.
if we ask to print the value for the variable 'c' the the computer will assign ' 2+b ' i.e ' 2+25 ' i.e ' 27 ' to the variable 'c'

it's an invalid instruction because you can't use any undeclared variable. Here 'e' is an undeclared variable, therefore compiler will throw 
an error. Nevertheless you've declared the variable 'e' in the next line after using the variable the variable, the compiler will still
throw an error as we know that C LANGUAGE is a ' LINE-ORDER SENSITIVE LANGUAGE  ' meaning compiler will go through LINE-1 and then LINE-2
and so on. */



int main()

{
    int a=22;
    int b=a+3,c;
    c=2+b;
    int d=a+b+c+e; // You can see an error sign in the variable 'e'
    int e=2;  
    printf("Value of a=%d\n",a); // a=22
    printf("Value of b=%d\n",b); // b=25
    printf("Value of c=%d\n",c); // c=27
    return 0;
}