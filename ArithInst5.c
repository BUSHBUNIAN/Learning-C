#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf("%d",&b);

    int Rem=a%b; // Modulo or Modular operator gives remainder for INTEGER. It won't work for other data types.
    printf("Remainder=%d\n",Rem);

    return 0;
}