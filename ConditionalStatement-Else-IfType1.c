#include<stdio.h>

int main()
{
    int age;
    printf("Enter age:");
    scanf("%d", &age);

    if(age>=18)
    {
    printf("He/she is an adult.");
    }
    else if(age<18 && age>13)
    {
    printf("He/she is a teenager.");
    }
    else 
    {
    printf("He/she is a child.");    
    }
    return 0;
}