#include<stdio.h>
#include<math.h>

int main()
{
    char stars1='**'; /*    Data type 'char' can store SINGLE CHARACTER; Here, TWO ASTERISKS can't be contained by Variable 'stars1' which is 
    a char-Data type-Variable;

    Thus, it's an INVALID STATEMENT     */
    
    char stars2='* '; /*    Data type 'char' can store SINGLE CHARACTER; Here, ONE ASTERISK and ONE SPACE can't be contained by 'stars2' which is 
    a char-Data type-Variable; 
    
    Thus, it's an INVALID STATEMENT     */

    printf("%c",stars1);
    printf("%c",stars2);
    return 0;
}