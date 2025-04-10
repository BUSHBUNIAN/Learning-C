#include<stdio.h>

/*  Syntax of 'while loop':

while()
{
    //do something
}

Note: We can't declare and initialize the iterator/counter inside the parenthesis of while loop i.e 'while(.....)'. We can declare and initialize iterator/counter
before writing 'while loop code block{}'. We can initialize integer or float or double or character or string. Mostly in loop control 
instructions, we initialize 'i' . Here, 'i' is referred as iterator or counter as it's used for iteration.

We can't write 'Loop-updation condition' inside the parenthesis of while loop i.e 'while(.....)'. We can write 'Loop-updation condition' inside
the 'while loop code block{.....}'.

We can only write 'Loop-termination condition' inside the parenthesis of while loop i.e 'while(.....)'.     */

int main()
{
    int i=1;    // Declaration & Initialization of iterator/counter

    while(i<=5) // Loop-termination condition
    {
        printf("Hey Jasmina!\n");
        i++;    // Loop-updation condition
    }

    return 0;
}