#include<stdio.h>
#include<math.h>

int main()
{
    char stars='**'; /*    Data type 'char' can store SINGLE CHARACTER; Here, TWO ASTERISKS can't be contained by Variable 'stars' which is 
    a char-Data type-Variable;

    Thus, it's an INVALID STATEMENT     */
    
    printf("%c",stars);
    return 0;
}