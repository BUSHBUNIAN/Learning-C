#include<stdio.h>

/*  Syntax of 'do while loop':

do
{
    //do something
}
while();

Note: We can't declare and initialize the iterator/counter inside the parenthesis of do while loop i.e 'while(.....);'. We can declare and 
initialize iterator/counter before writing 'do while loop code block{}'. We can initialize integer or float or double or character or string. 
Mostly in loop control instructions, we initialize 'i'. Here, 'i' is referred as iterator or counter as it's used for iteration.

We can't write 'Loop-updation condition' inside the parenthesis of do while loop i.e 'while(.....);'. We can write 'Loop-updation condition' 
inside the 'do while loop code block{.....}'.

We can only write 'Loop-termination condition' inside the parenthesis of do while loop i.e 'while(.....);'.     */


int main()
{
    int i=3;   // Declaration & Initialization of iterator/counter
    
    do
    {
        printf("Hey Smita!\n");
        i--;    // Loop-updation condition
    }
    while(i>=1);    // Loop-termination condition
    
    return 0;
}