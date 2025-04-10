#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    printf("Enter value of a=");
    scanf("%f", &a);

    printf("Enter value of b=");
    scanf("%f", &b);
    
    printf("Enter value of c=");
    scanf("%f", &c);

    printf("Average of a, b and c is %f", (a+b+c)/3);
   
    return 0;
}