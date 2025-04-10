#include<stdio.h>

int main()
{
    int day;
    printf("Enter day-number (1-7):");
    scanf("%d", &day);

    switch(day)
    {
        case 1:printf("Monday\n");
        
        /* Since, I don't write the keyword 'break;' after case 1, I can't turn off the execution at case 1 only, 
        it will go further and execute case 2 if I compile and run the code. For eg: if I type 1 then the output will be: 'Monday' 'Tuesday' . */
        
        case 2:printf("Tuesday\n");
        break;
        case 3:printf("Wedneday\n");
        break;
        case 4:printf("Thursday\n");
        break;
        case 5:printf("Friday\n");
        break;
        case 6:printf("Saturday\n");
        break;
        case 7:printf("Sunday\n");
        break;
        default:printf("It's an invalid day-number! Please type a valid day-number.");
    }

    return 0;
}