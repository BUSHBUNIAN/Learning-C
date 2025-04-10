#include<stdio.h>
#include<math.h>

int main()
{
    int X; 
    
    printf("Enter value of X=");
    scanf("%i", &X);

    if (X%2 == 0) //    If the value of 'Y%2' == '0' appears to be TRUE (i.e 1), then "if-statement" will be executed
    {
        printf("It's divisible by 2"); //   The instruction written below "if-code-block-{.......}" is known as if-statement
    }

    else //    If the value of 'Y%2' == '0' appears to be FALSE (i.e 0), then "else-statement" will be executed
    {
        printf("It's not divisible by 2"); //   The instruction written below "else-code-block-{.......}" is known as else-statement
    }
    
    return 0;
}