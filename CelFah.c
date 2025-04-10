#include<stdio.h>
#include<math.h>
// Conversion from Celsius to Fahrenheit
int main()
{
    float cels;
    printf("Enter celsius=");
    scanf("%f",&cels);
    float fahr=(cels*1.8)+32;
    printf("Fahrenheit=%f\n",fahr);
    return 0;
} 