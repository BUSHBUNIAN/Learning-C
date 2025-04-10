#include<stdio.h>
#include<math.h>

int main()
{
    int a=5,b=7; // Value of 'a' is 5; value of 'b' is 7
    
    printf("%d\n\n",a=b); //  Value of 'b' (which is 7) is assigned to 'a' ; Now a=7 

    printf("%d\n\n",a+=b); // a+=b meaning a=a+b ; a=7+7 ; a=14 ; Now a=14

    printf("%d\n\n",a-=b); // a-=b meaning a=a-b ; a=14-7 ; a=7 ; Now a=7

    printf("%d\n\n",a*=b); // a*=b meaning a=a*b ; a=7*7 ; a=49 ; Now a=49

    printf("%d\n\n",a/=b); // a/=b meaning a=a/b ; a=49/7 ; a=7 ; Now a=7

    printf("%d\n\n",a%=b); // a%=b meaning a=a%b ; a=7%7 ; a=0 ; Now a=0

    return 0;
}