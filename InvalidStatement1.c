#include<stdio.h>
#include<math.h>

int main()
{
    int X=6, int Y=X; /*    Type Declaratiion Error; As per the rule, you can't declare and use the variable in the same line,
     
     THUS, IT'S AN INVALID STATEMENT    */ 
    
    int A=5, B=A; /*    Here, Variables are declared and then used, thus, IT'S A VALID STATEMENT     */
    printf("%d", A);
    printf("\n%d", B);
    
    int S=9;
    T=S; /*     Type Declaration Error; As per the rule, you can't use the undeclared variable' THUS, IT'S AN INVALID STATEMENT     */
    
    int M; N=M; /*     Type Declaration Error; As per the rule, you can't use the undeclared variable' THUS, IT'S AN INVALID STATEMENT     */


}