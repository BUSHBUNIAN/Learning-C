#include<stdio.h>

int main()
{
    int n;
    printf("Enter whose table you want to print:");
    scanf("%d", &n);

    printf("\nTable of %d are:\n",n);
    
    for(int i=1; i<=10; i++)
    {
        int table=n*i;
        printf("%d\n",table);    
    }

    return 0;
}