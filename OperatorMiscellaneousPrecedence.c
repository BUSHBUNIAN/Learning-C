#include<stdio.h>

int main()
{
    int a=5-4/2*3-4/6+7/2*10-9+4*5+4/7*2;   /* Whenever we've been given multiple operators in between the expressions we'll perform:
    1- TRAVERSE FROM LEFT TO RIGHT
    2- FIND OUT THE HIGHEST PRECEDENCE ORDER
    3- WORK ON THE OPERANDS 
    
    EXPLANATION OF THE PROCEDURE:
    1.  4/2=2;      THUS,   a=5-2*3-4/6+7/2*10-9+4*5+4/7*2
    
    2.  2*3=6;      THUS,   a=5-6-4/6+7/2*10-9+4*5+4/7*2
    
    3.  4/6=0;      THUS,   a=5-6-0+7/2*10-9+4*5+4/7*2    [Since we are working on INTEGER we'll accept '0' as our integer in the Quotient.
    We can't accept decimal] 
    
    4.  7/2=3;      THUS,   a=5-6-0+3*10-9+4*5+4/7*2      [Since we are working on INTEGER we'll accept '3' as our integer in the Quotient.
    We can't accept decimal]
    
    5.  3*10=30;    THUS,   a=5-6-0+30-9+4*5+4/7*2
    
    6.  4*5=20;     THUS,   a=5-6-0+30-9+20+4/7*2
    
    7.  4/7=0;      THUS,   a=5-6-0+30-9+20+0*2            [Since we are working on INTEGER we'll accept '0' as our integer in the Quotient.
    We can't accept decimal]
    
    8.  0*2=0;      THUS,   a=5-6-0+30-9+20+0              [Since we've same precedence order we'll perform operation from LEFT TO RIGHT]
    
    9.  5-6=-1;     THUS,   a=-1-0+30-9+20+0
    
    10. -1-0=-1     THUS,   a=-1+30-9+20+0
    
    11. -1+30=29    THUS,   a=29-9+20+0
    
    12. 29-9=20     THUS,   a=20+20+0
    
    13. 20+20=40    THUS,   a=40+0
    
    14. 40+0=40     THUS,   a=40                          [Our final operation ends here. The result is '40'. THE MINIMUM OPERANDS REQUIRED
    TO CARRY OUT AN OPERATION IS TWO]                      */
    
    
    printf("%i",a);
    return 0;
}