#include<stdio.h>

/*  What 'switch' conditional operator does is it matches the constant (the argument which we write inside the parenthesis after 'switch' keword)
with the ' case 1, case 2, case 3, .....' and execute only the matched case.

The functionality of 'break' keyword is to get you out of the 'cases'. If you can't get out of the cases, then all of the cases get executed.

The functionality of 'default' keyword is that if none of the cases get executed then the 'default case' get executed.     */

int main()
{
    int day;
    printf("Enter day-number (1-7):");
    scanf("%d", &day);

    switch(day)
    {
        case 1: printf("Monday\n");
        break;
        
        case 2: printf("Tuesday\n");
        break;
        
        case 3: printf("Wedneday\n");
        break;
        
        case 4: printf("Thursday\n");
        break;
        
        case 5: printf("Friday\n");
        break;
        
        case 6: printf("Saturday\n");
        break;
        
        case 7: printf("Sunday\n");
        break;
        
        default: printf("It's an invalid day-number! Please type a valid day-number.");
    }

    return 0;
}