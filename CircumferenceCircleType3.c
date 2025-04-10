#include<stdio.h>
// Circumference of Circle
int main()
{
    float radius;
    float pi=3.141;
    printf("Enter radius=");
    scanf("%f",&radius);
    float diameter=radius+radius;   //Type Declaration Instruction
    printf("Circumference is %f\n",pi*diameter);
    return 0;
}