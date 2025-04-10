#include<stdio.h>
#include<math.h>

/* Double VERTICAL BAR (i.e ||) suggests LOGICAL OPERATOR. There shouldn't be any space between these two VERTICAL BARS

    Single VERTICAL BAR (i.e |) suggests BITWISE OR OPERATOR.

    For the output to be TRUE (i.e 1) any one condition/case must be TRUE (i.e 1)    */

int main()
{
    printf("%d",5>6 || 6>7);    /* Output is 0; It shows that it's FALSE.
    
        EXPLANATION: Case1:'6' is greater than '5' (FALSE)       Case2: '6' is greater than '7' (FALSE)    */   
    
    return 0;
}