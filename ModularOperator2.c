#include<stdio.h>

int main()
{
    int a;
    printf("Enter a=");
    scanf("%d",&a);
    int b;
    printf("Enterb=");
    scanf("%d",&b);
    int mod;
    mod=a%b;
    printf("a mod b=%d",mod);
    return 0;
}