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
    
    printf("\n\nChoose day:");
    scanf("%d", &day);

    switch (day) 
    {
        case 1:printf("It's Monday.\n\n");
        
        printf("Press 1 for White\n");
        printf("Press 2 for Blue\n\n");
        
        printf("\nChoose color code:");
        scanf("%d", &col);

            switch (col) 
            {
                case 1:printf("White uniform.\n");
                break;

                case 2:printf("Blue uniform.\n");
                break;

                default:printf("Invalid color-code selection.\n");
                   
            }
        break;

        case 2:printf("It's Tuesday.\n\n");
        
        printf("Press 1 for White\n");
        printf("Press 2 for Blue\n\n");

        printf("\nChoose color code:");
        scanf("%d", &col);

            switch (col) 
            {
                case 1:
                    printf("White uniform.\n");
                    break;
                case 2:
                    printf("Blue uniform.\n");
                    break;
                default:
                    printf("Invalid color-code selection.\n");
                    
            }
        break;

        case 3:printf("It's Wednesday.\n\n");
            
        printf("Press 1 for White\n");
        printf("Press 2 for Blue\n\n");
            
        printf("\nChoose color code:");
        scanf("%d", &col);

            switch (col) 
            {
                case 1:
                    printf("White uniform.\n");
                    break;
                case 2:
                    printf("Blue uniform.\n");
                    break;
                default:
                    printf("Invalid color-code selection.\n");
                    
            }
        break;

        case 4:printf("It's Thursday.\n\n");
            
        printf("Press 1 for White\n");
        printf("Press 2 for Blue\n\n");
        
        printf("Choose color code:");
        scanf("%d", &col);

            switch (col) 
            {
                case 1:
                    printf("White uniform.\n");
                    break;
                case 2:
                    printf("Blue uniform.\n");
                    break;
                default:
                    printf("Invalid color-code selection.\n");
                    
            }
        break;

        case 5:printf("It's Friday.\n\n");
            
        printf("Press 1 for White\n");
        printf("Press 2 for Blue\n\n");
            
        printf("Choose color code:");
        scanf("%d", &col);

            switch (col) 
            {
                case 1:
                    printf("White uniform.\n");
                    break;
                case 2:
                    printf("Blue uniform.\n");
                    break;
                default:
                    printf("Invalid color-code selection.\n");
                
            }
        break;

        case 6:printf("It's Saturday.\n\n");
            
        printf("Press 1 for White\n");
        printf("Press 2 for Blue\n\n");
            
        printf("Choose color code:");
        scanf("%d", &col);

            switch (col) 
            {
                case 1:
                    printf("White uniform.\n");
                    break;
                case 2:
                    printf("Blue uniform.\n");
                    break;
                default:
                    printf("Invalid color-code selection.\n");
                    
            }
        break;

        default:printf("Invalid day selection!.\n");
            
    }

    return 0;
}
