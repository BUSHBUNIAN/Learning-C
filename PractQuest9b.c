#include<stdio.h>

// Using ternary operator

int main()
{
    int marks;
    printf("Enter marks(0-100):");
    scanf("%d",&marks);
    
    marks<=30 ? printf("FAIL\n"):printf("PASS\n");

    return 0;
}