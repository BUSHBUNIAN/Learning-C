#include<stdio.h>

int main()
{
    int a=5, b=a+1;
    int sum=a+b;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("sum=%d\n",sum);

    int x,y,z;
    printf("\nEnter x=");
    scanf("%d",&x);
    printf("Enter y=");
    scanf("%d",&y);
    printf("Enter z=");
    scanf("%d",&z);

    int Sum;
    Sum=x+y+z;
    printf("Sum=%d\n",Sum);
    return 0;
}