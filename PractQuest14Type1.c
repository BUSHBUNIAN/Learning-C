#include<stdio.h>

int main()
{
    int n;

    printf("Enter upto which digit you want to print the numbers from 0:");
    scanf("%d",&n);

    for(int i=0; i<=n; i++)
    {
        printf("%d\n",i);
    }

    return 0;
}