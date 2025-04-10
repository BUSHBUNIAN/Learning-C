#include<stdio.h>

int main()
{
    int x=2;
    printf("\n\nValue of x=%i(After initialization)\n",x);
    if(x=1)
    {
        printf("\nx is equal to 1\n");    /*  Since the the value of x is true, the if statement gets executed.(In C language '0' is regarded as 
        
        FALSE and all the other values are regarded as TRUE)   */
    }
    else
    {
        printf("x is not equal to 1\n");
    }
    printf("\n\nValue of x=%i(After if statement)\n\n",x);
    return 0;
}