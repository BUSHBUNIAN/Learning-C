#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter upto which numbers you want the sum:");
    scanf("%d",&n);

    int sum=0;
    
    printf("\nThe numbers in reverse order:\n");

    for(int i=1, j=n; j>=1 && i<=n; j--, i++)   // for loop permits multiple declaration and initializaton of  different variables
    {
        sum=sum+i;
        printf("%d\n",j);
    }

    printf("\nSum of numbers is %d\n",sum);

    return 0;
}