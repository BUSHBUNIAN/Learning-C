#include<stdio.h>
#include<math.h>

int main()
{
    int X, Y;
    printf("Enter value of X=");
    scanf("%d", &X);
    printf("Enter value of Y=");
    scanf("%d", &Y);
    if(X>Y)
    {
        printf("%d is smallest", Y);
    }
    else
    {
        printf("%i is smallest", X);
    }
    return 0;

}