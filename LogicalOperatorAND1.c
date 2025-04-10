#include<stdio.h>
#include<math.h>

/* Double AMPERSAND (i.e &&) suggests LOGICAL OPERATOR. There shouldn't be any space between these two AMPERSANDS

    Single AMPERSAND (i.e &) suggests BITWISE AND OPERATOR.

    For the output to be TRUE (i.e 1) every conditions/cases must be TRUE (i.e 1)    */

int main()
{
    printf("%d",6>5 && 7>6);    /* Output is 1; It shows that it's TRUE.
    
        EXPLANATION: Case1:'6' is greater than '5' (TRUE)       Case2: '7' is greater than '6' (TRUE)    */   
    
    return 0;
}