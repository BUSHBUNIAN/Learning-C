#include<stdio.h>
#include<math.h>

/* ' ^ ' is  called XOR, which is a BITWISE operator. It's used to perform operation in between 0s and 1s these are referred as bits and
these are the machine code understood by machines i.e computers.

Here C compiler won't throw any error since it's a valid operator. Nevertheless we won't get the correct value for " a to the power b '

Bitwise operator gives 0(FALSE) for two same inputs or else it gives 1(TRUE) */

int main()
{
    int a,b;
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf("%d",&b);

    printf("\nINCORRECT OUTOUT:\n");
    int power1=a^b; // ' ^ ' This is called XOR operator in C-programming for BITWISE OPERATION, hence we'll get incorrect output.
    printf("a^b=%d\n",power1);

    int i,j;
    printf("Enter i=");
    scanf("%d",&i);
    printf("Enter j=");
    scanf("%d",&j);
    
    printf("\nCORRECT OUTPUT:\n");
    int power2=pow(i,j); // ' pow(x,y) ' is a function used to calculate ' x to the power y ' , now we,ll get correct output.
    printf("i^j=%d\n",power2);

    return 0;

}