#include<stdio.h>
#include<math.h>

int main()
{
    int Y;

    printf("Enter value of Y=");
    scanf("%i", &Y);

    if (Y%2 == 0) //    If the value of 'Y%2' == '0' appears to be TRUE (i.e 1), then "if-statement" will be executed 
    {
        printf("It's an EVEN number"); //   The instruction written below "if-code-block-{.......}" is known as if-statement
    }

    else //    If the value of 'Y%2' == '0' appears to be FALSE (i.e 0), then "else-statement" will be executed
    {
        printf("It's an odd number"); //   The instruction written below "else-code-block-{.......}" is known as else-statement
    }
    
    return 0;
}