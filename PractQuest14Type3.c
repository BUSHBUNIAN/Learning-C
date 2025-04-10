#include<stdio.h>

int main()
{
    int n;

    printf("Enter upto which number you want to print:");
    scanf("%i",&n);

    int i=0;

    do
    {
        printf("%d\n",i);
        i++;
    } 
    while(i<=n);

    return 0;
}