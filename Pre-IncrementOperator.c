#include<stdio.h>

/*  Increment operator is used to increase the value of any variable by 1. There are two types of Increment operators:

(a) Pre-increment operator: This operator increases the value of the variable by 1, and then uses the variable.
    
    For eg: ++i

(b) Post-increment operator: This operator uses the variable, and then increases the value of the variable by 1.
    
    For eg: i++      */

int main()
{
    int i=1;

    printf("%d\n", ++i);    /*  Pre-increment operator says, "INCREASE, THEN USE".
    
    We've used 'Pre-increment operator' here. Hence, the value of the variable 'i' will be increased by 1 first, and then the variable
    will be used.    */
    
    printf("%d\n",i);

    return 0;
}