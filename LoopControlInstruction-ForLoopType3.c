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
    int i=1;    //  Variable is declared and initialized outside for loop.

    for(i; i<=5; i+=1)
    {
        printf("My name is Bushbunian\n");
    }

    return 0;
}