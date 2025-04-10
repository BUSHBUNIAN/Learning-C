#include<stdio.h>

/*      Whenever we've multiple conditional statements i.e [ ' { printf("This individual is %i years old. He/She is AN ADULT.",age); } '  and  

' { printf("This individual is %d years old. He/She is NOT AN ADULT.",age); } ' ] for a single conditional argument i.e [ ' if(age>=18) '] 

in such cases in order to shorten those lines we can use TERNARY OPERATOR. Instead of 'If else statement' we can write Ternary Operator.


Ternary Operator Syntax: Condition ? Do something if TRUE : Do something if FALSE; 


For eg: We can write the below code as

#include<stdio.h>

int main()
{
    int age;
    printf("Enter age:");
    scanf("%i",&age);

    if(age>=18)
    {
        printf("This individual is %i years old. He/She is AN ADULT.",age);
    }
    else
    {
        printf("This individual is %d years old. He/She is NOT AN ADULT.",age);
    }
    return 0;
}       */

int main()
{
    int age;
    printf("Enter age:");
    scanf("%i",&age);

    age >= 18 ? printf("This individual is %i years old. He/She is AN ADULT.", age) : printf("This individual is %d years old. He/She is NOT AN ADULT.", age);
    return 0;
}