#include<stdio.h>

int main()
{
    int n;

    printf("Enter number upto which numbers you want the sum:");
    scanf("%d",&n);

    int i=1, sum=0;

    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    
    printf("\nSum of numbers is %d\n",sum);

    printf("\nThe numbers in reverse order:\n");

    int k=n;    // while loop doesn't permit redefinition of predeclared variable. Hence, I can't use iterator 'i' here again.

    while(k>=1)
    {
        printf("%d\n",k);
        k--;
    }

    return 0;
}