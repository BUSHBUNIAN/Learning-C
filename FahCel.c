#include<stdio.h>
#include<math.h>
// Conversion from Fahrenheit to Celsius
int main()
{
    float fahr;
    printf("Enter fahrenheit=");
    scanf("%f",&fahr);
    float cels=(fahr-32)*5/9;
    printf("Celsius=%f\n",cels);
    return 0;
} 