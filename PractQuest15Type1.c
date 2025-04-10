#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter upto which numbers you want the sum:");
    scanf("%d",&n);

    int sum=0;
    
    for(int i=1; i<=n; i++)
    {
        sum=sum+i;
    }

    printf("\nSum of numbers is %d\n",sum);

    printf("\nThe numbers in reverse order:\n");
    
    for(int i=n; i>=1; i--) // for loop permits redefinition of predeclared variable. Hence, I can use iterator 'i' here agian.
    {
        printf("%d\n",i);
    }

    return 0;
}