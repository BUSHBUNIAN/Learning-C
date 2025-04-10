#include<stdio.h>
#include<math.h>

//   You can either include the brackets or exclude them while placing multiple NOT Logical Operator (i.e !)

int main()
{
    printf("%d",!!(5>6 && 6>7));  /*    Solving Procedure:  
    
    1. '5' is greater than '6' (FALSE) && '6' is greater than '7' (FALSE)
    
    Output: FALSE (i.e 0)

    2. !FALSE

    OUTPUT: TRUE (i.e 1)

    3. !TRUE

    Output: FALSE (i.e 0) This is the final output      */
    
    return 0;
}
