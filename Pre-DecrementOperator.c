#include<stdio.h>

/*  Decrement operator is used to decrease the value of any variable by 1. There are two types of Decrement operators:

(a) Pre-decrement operator: This operator decreases the value of the variable by 1, and then uses the variable.
    
    For eg: --i

(b) Post-decrement operator: This operator uses the variable, and then decreases the value of the variable by 1.
    
    For eg: i--      */

int main()
{
    int i=1;

    printf("%d\n", --i);    /*  Pre-decrement operator says, "DECREASE, THEN USE".
    
    We've used 'Pre-decrement operator' here. Hence, the value of the variable 'i' will be decreased by 1 first, and then the variable
    will be used.    */

    printf("%d\n", i);
    
    return 0;
}