#include<stdio.h>
#include<math.h>

/* Valid Arithmetic Instruction

' #include<math.h> ' is a Header file that includes ' pow(x,y) ' which is a library function in C-programming. */

int main()
{
    int b,c;
    printf("Enter b=");
    scanf("%d",&b);
    printf("Enter c=");
    scanf("%d",&c);

    int a=b+c; // In LHS there should be a single variable which will store the value
    printf("a=%d\n",a);

    int e,f;
    printf("\nEnter e=");
    scanf("%d",&e);
    printf("Enter f=");
    scanf("%d",&f);
    
    int d=e*f; // In order to multiply we have to use ' * "  it's read as ASTERISK
    printf("d=%d\n",d);
    
    int h,i;
    printf("\nEnter h=");
    scanf("%d",&h);
    printf("Enter i=");
    scanf("%d",&i);

    int g=pow(h,i); // in order to calculate power of a variable we have to use a FUNCTION. For example pow(x,y) for x to the power y.
    printf("h^i=%d\n",g);
   
    return 0;
}