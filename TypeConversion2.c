#include<stdio.h>

// int data type operates with float data type or vice-versa will yield float data type in the output.

int main()
{
    int a;
    float b;
    printf("\nEnter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf("%f",&b);
    printf("a*b=%f\n",a*b);
    printf("a/b=%f\n",a/b);
    return 0;
}
