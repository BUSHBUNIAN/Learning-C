#include<stdio.h>
// Perimeter of Rectangle
int main()
{
    float length, breadth;  // length and breadth of rectangle 
    printf("Enter length=");
    scanf("%f",&length);
    printf("Enter breadth=");
    scanf("%f",&breadth);
    printf("Perimeter is %f\n",2*(length+breadth)); // Perimeter of rectangle=2*(length + breadth)
    return 0;
}