#include<stdio.h>

int main()
{
    int day;
    printf("Enter day-number (1-7):");
    scanf("%d", &day);
    /*  Properties of switch:
    (a) Cases can be in any order: You can write cases in any order in switch-conditional operator

    (b) Nested switch (Switch inside switch) are allowed: You can write switch statement inside a switch statement    */

    switch(day)
    {
        case 2:printf("Tuesday\n");
        break;
        case 1:printf("Monday\n");
        break;
        case 3:printf("Wedneday\n");
        break;
        case 5:printf("Friday\n");
        break;
        case 4:printf("Thursday\n");
        break;
        case 6:printf("Saturday\n");
        break;
        case 7:printf("Sunday\n");
        break;
        default:printf("It's an invalid day-number! Please type a valid day-number.");
    }

    return 0;
}