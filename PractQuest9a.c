#include<stdio.h>

// Using if-else conditional statement

int main()
{
    int marks;
    printf("Enter marks(0-100):");
    scanf("%d",&marks);
    
     if(marks>=0 && marks<=30)
     {
         printf("FAIL");
     }
     else if(marks>30 && marks<=100)
     {
         printf("PASS");
     }
     else
     {
         printf("Invalid marks! Please enter valid marks");
    }

    return 0;
}