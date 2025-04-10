#include<stdio.h>

/* Syntax of 'for loop': 
for(initialization; condition; updation)
{
    //do something
}

Note: We can initialize integer or float or double or character or string. Mostly in loop control instructions, we initialize 'i' . 
Here, 'i' is referred as iterator or counter as it's used for iteration.    */

int main()
{
    int i;  //  Variable is declared outside for loop

    for(i=1; i<=5; i+=1)    //  Variable is initialized inside for loop
    {
        printf("My name is Bushbunian\n");
    }

    return 0;
}