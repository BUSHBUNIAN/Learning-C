#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter upto which numbers you want the sum:");
    scanf("%d",&n);

    int sum=0;
    
    printf("\nThe numbers in reverse order:\n");

    for(int j=n; j>=1; j--)
    {
        sum=sum+j;
        printf("%d\n",j);
    }

    printf("\nSum of numbers is %d\n",sum);

    return 0;
}