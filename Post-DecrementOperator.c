#include<stdio.h>

/*  Decrement operator is used to decrease the value of any variable by 1. There are two types of Decrement operators:

(a) Pre-decrement operator: This operator decreases the value of the variable by 1, and then uses the variable.
    
    For eg: --i

(b) Post-decrement operator: This operator uses the variable, and then decreases the value of the variable by 1.
    
    For eg: i--      */

int main()
{
    int i=1;

    printf("%d\n", i--);    /*  Post-decrement operator says, "USE, THEN DECREASE".
    
    We've used 'Post-decrement operator' here. Hence, the variable will be used first, and then the value of the variable 'i' will be 
    decreased by 1. */
    
    printf("%d\n", i);

    return 0;
}