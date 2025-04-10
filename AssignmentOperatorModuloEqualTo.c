#include<stdio.h>
#include<math.h>

int main()
{
    int a=5, b=7; //    value of 'a' is 5 ; Value of 'b' is 7
    
    a%=b; //    a%=b meaning a=a%b ; a=5%7 ; a=5 ; Now a=5
   
    printf("%i",a);
    
    return 0;
}