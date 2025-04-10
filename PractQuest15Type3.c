#include<stdio.h>

int main()
{
    int n;

    printf("Enter upto which numbers you want the sum:");
    scanf("%i", &n);

    int i=1, sum=0;

    do 
    {
        sum=sum+i;
        i++;
    }
    while(i<=n);

    printf("\nSum of numbers is %d\n",sum);

    printf("\nThe numbers in reverse order:\n");

    int j=n; // do while loop doesn't permit redefinition of predeclared variable. Hence, I can't use iterator 'i' here again. 
    
    do
    {
        printf("%d\n",j);
        j--;
    } 
    while (j>=1);
    
    return 0;
}