#include<stdio.h>
#include<math.h>

int main()
{
    int X, Y;
    printf("Enter value of X=");
    scanf("%d", &X);
    printf("Enter value of Y=");
    scanf("%d", &Y);
    if(X<Y)
    {
        printf("%d is smallest", X);
    }
    else
    {
        printf("%i is smallest", Y);
    }
    return 0;

}