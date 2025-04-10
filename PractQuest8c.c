#include<stdio.h>
#include<math.h>
 
int main()
{
    int X;
    printf("Enter value of X=");
    scanf("%i", &X);
    printf("%d", X>9 && X<100);
    return 0;
}