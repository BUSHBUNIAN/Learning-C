#include<stdio.h>

int main()
{
    int a=5*(2/2)*3;    /* Whenever we've been given multiple operators and bracket in between the expressions we'll perform:
    1- TRAVERSE FROM LEFT TO RIGHT
    2- FIND OUT THE BRACKET EXPRESSIONS AND PERFORM THE OPERATION MEANING OPEN THE BRACKET
    3- FIND OUT THE HIGHEST PRECEDENCE ORDER
    4- WORK ON THE OPERANDS 
    
    EXPLANATION OF THE PROCEDURE:
    1.  (2/2)=1;        THUS,   a=5*1*3
    
    2.  5*1=5;          THUS,   a=5*3
    
    3.  5*3=15;         THUS,   a=15        */
    
    printf("%d",a);
    return 0;
}