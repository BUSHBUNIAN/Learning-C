#include<stdio.h>

int main()
{
    int age;
    printf("Enter age:");
    scanf("%i", &age);

    if(age >= 18)
    {
        printf("This individual is %i years old.\n", age);    /*  Whenever we've single line instruction inside the code-block
        
        we can either skip or keep the code-block. However, if we've multiple isntructions we're compelled to use   */

        printf("He/She is an adult.");
    }
     else
    
        printf("This individual is %d years old.\nHe/She is not an adult.", age);   /*  Whenever we've single line instruction inside the code-block
        
        we can either skip or keep the code-block   */
    
    return 0;
}