#include<stdio.h>
// Area of Circle
int main()
{
    int radius;
    float pi;
    printf("Enter radius=");
    scanf("%d",&radius);
    printf("Enter pi=");
    scanf("%f",&pi);
    printf("Area is %f\n",pi*radius*radius);
    return 0;
}