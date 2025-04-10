#include<stdio.h>

/*  Natural numbers are counting numbers meaning they are all positive intergers. Natural number starts from 1. Mathematically, natural numbers 
are denoted by N. For eg: N={1,2,3,4,........}    

In C programming we could use any one of the following in order to check the number is wheteher natural or not:
1.if(num!=0 && num>0)
2.if(num>0)
3.if(num>=1)
4.if(num!=0 && num>=1)    */

int main()
{
    int num;
    printf("Enter number:");
    scanf("%i",&num);

    if(num>=1)  // Using if-else
    {
        printf("%i is a natural number",num);
    }
    else
    {
        printf("%d is not a natural number",num);
    }

    return 0;
}