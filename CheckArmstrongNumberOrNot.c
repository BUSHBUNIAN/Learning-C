#include<stdio.h>

/*  Armstrong number is defined as the number whose sum of the digits raised to power number of digits is equal to the original number.

For eg: 153 
Number of digits in 153 is 3 
Therefore, 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153 
Hence, 153 is an Armstrong number   */

int main()
{
    int num, sum=0;

    printf("Enter number:");
    scanf("%i",&num);

    int originalnum=num;    //  Save the original number for later

    while(num>0)
    {
        int digit=num%10;   // Get the rightmost digit of the number
        sum+=digit*digit*digit; // Add the cube of the digit to the sum
        num/=10;    // Remove the rightmost digit from the number
    }

    if(originalnum==sum)
    {
        printf("%i is an Armstrong number",originalnum);
    }
    else
    {
        printf("%i is not an Armstrong number",originalnum);
    }
    
    return 0;
}