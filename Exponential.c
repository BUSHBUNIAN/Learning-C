#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf("%d",&b);
    int power= pow(a,b);
    printf("a to the power b is %d",power);
    return 0;
}