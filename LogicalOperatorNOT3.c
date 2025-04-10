#include<stdio.h>
#include<math.h>

//   You can either include the brackets or exclude them while placing multiple NOT Logical Operator (i.e !)

int main()
{
    printf("%d",!(5>6) && !(6>7));  /*    Solving Procedure:  
    
    1. '5' is greater than '6'
    
    Output: FALSE (i.e 0)

    2. '6' is greater than '7'

    Output: FALSE (i.e 0)

    3. !FALSE; meaning NOT FALSE (i.e !0) [Referring Output of 1]

    Output: TRUE (i.e 1)

    4. !FALSE; meaning NOT FALSE (i.e !0) [Referring Output of 2]

    Output: TRUE (i.e 1)

    5. TRUE && TRUE

    Output: TRUE (i.e 1) This is the final output.    */
    
    return 0;
}
