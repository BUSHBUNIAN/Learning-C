#include<stdio.h>

int main()
{
    int n;

    printf("Enter whose table you want to print:");
    scanf("%i",&n);

    printf("Tables of %d are:\n",n);

    for(int i=1; i<=10; i++)
    {
        printf("%d\n",n*i);
    }

    return 0;
}