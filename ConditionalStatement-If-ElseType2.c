#include<stdio.h>

int main()
{
    int age;
    printf("Enter age:");
    scanf("%i", &age);

    if(age >= 18)
    
        printf("This individual is %i years old. He/She is an adult.", age);    /*  Whenever we've single line instruction inside the code-block
        we can either skip or keep the code-block*/
    
     else
    
        printf(" This individual is %d years old. He/She is not an adult.", age);   /*  Whenever we've single line instruction inside the code-block
        we can either skip or keep the code-block*/

    return 0;
}