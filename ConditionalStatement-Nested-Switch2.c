#include<stdio.h>

int main()
{
    int day, col;

    printf("\n\nPress 1 for Monday\n");
    printf("Press 2 for Tuesday\n");
    printf("Press 3 for Wednesday\n");
    printf("Press 4 for Thursday\n");
    printf("Press 5 for Friday\n");
    printf("Press 6 for Saturday\n");

    printf("\nChoose day:");
    scanf("%i",&day);

    printf("\n\nPress 1 for White\n");
    printf("Press 2 for Blue\n");

    printf("\nChoose color:");
    scanf("%i",&col);

    switch(day)
    {
        case 1: printf("\n\nIt's Monday.\n");

        switch(col)
        {
            case 1: printf("Students will have to wear White uniform.\n\n");
            break;

            default: printf("Invalid color selection!\n\n");
        }
        break;

        case 2: printf("\n\nIt's Tuesday.\n");

        switch(col)
        {
            case 2: printf("Students will have to wear Blue uniform.\n\n");
            break;

            default: printf("Invalid color selection!\n\n");
        }
        break;

        case 3: printf("\n\nIt's Thursday.\n");

        switch(col)
        {
            case 3:  printf("Students will have to wear Blue uniform.\n\n");
            break;

            default: printf("Invalid color code selection!\n\n");
        }
        break;

        case 4: printf("\n\nIt's Wednesday.\n\n");
        
        switch(col)
        {
            case 4: printf("Students will have to White uniform.\n\n");
            break;

            default: printf("Invalid color code selection!\n\n");
        }
        break;

        case 5: printf("\n\nIt's Friday.\n\n");

        switch(col)
        {
            case 5: printf("Students will have to wear Blue uniform.\n\n");
            break;

            default: printf("Invalid color code selection!\n\n");
        }
        break;

        case 6: printf("\n\nIt's Saturday.\n\n");

        switch(col)
        {
            case 6:  printf("Students will have to wear White uniform.\n\n");
            break;

            default: printf("Invalid color code selection!\n\n");
        }
        break;

        default: printf("Invalid day selection!\n\n");

    }

    return 0;
}