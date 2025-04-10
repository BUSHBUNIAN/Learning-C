#include<stdio.h>

/*  We must pay attention of not constructing an 'Infinite Loop' in our code. If we run a code containing infinite loop, it will cause our 
program to hang, as it will continue executing endlessly.   */

int main()
{
    for(int i=1; ; i++) /*  Here, we've missed out writing the 'Loop-Termination condition'. This will execute "Hello World" infinitely.
    We must not miss out any condition while writing 'for loop', 'while loop' and 'do while loop'; otherwise our code 
    will crash. Infinite loop means the code will execute endlessly.   */
    
    {
        printf("Hello World\n");
    }

    return 0;
}