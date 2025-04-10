#include<stdio.h>

int main()
{
    char Name[20];          /* NAME WILL BE STORED AS STRING, BECAUSE IT CAN HAVE MULTIPLE CHARACTERS (i.e ALPHABETS)

    FOR THIS WE TAKE SIZE OF THE VARIABLE 20 IN BETWEEN SQUARE BRACKETS AFTER WRITING THE NAME OF THE VARIABLE 
    
    MEANING HERE, Name-VARIABLE CAN HAVE 20 CHARACTERS (i.e 20 ALPHABETS) 
    
    UNDERSCORE SIGN (_) WILL BE COUNTED TOO */

    char Phone[15];         //PHONE NUBER WILL BE STORED AS STRING, BECAUSE IT CAN HAVE MULTIPLE DIGITS (i.e NUMBERS)

    char Rate;          //RATING WILL BE STORED AS CHARACTER,

    int Queue;          //QUEUE WILL BE STORED AS INTEGER

    float Amount;           //AMOUNT WILL BE STORED AS DECIMAL
    
    printf("\nType Customer Name:");

    scanf("%s",Name);           /* " %s " WILL SCAN THE VALUE AND STORE IT IN Name-VARIABLE

    " & " CAN BE AVOIDED INCASE OF STRING-VARIABLE (i.e HERE, Name-VARIABLE)
    
    WHILE TYPING NAME DON'T GIVE SPACE BECAUSE YOU'RE WRITING STRING WHICH CAN'T HAVE SPACE IN BETWEEN CHARACTERS 
    
    INSTEAD OF THIS GIVE UNDERSCORE SIGN(_) TO SEPARATE FIRST NAME AND LAST NAME */

    printf("Type Customer Phone Number:");

    scanf("%s",Phone);          /* " %s " WILL SCAN THE VALUE AND SRORE IT IN Phone-VARIABLE

    " & " CAN BE AVOIDED INCASE OF STRING-VARIABLE (i.e HERE, Phone-VARIABLE) */

    printf("Type Customer Queue Number:");

    scanf("%d",&Queue);         /* " %d " WILL SCAN THE VALUE AND STORE IT IN Queue-VARIABLE. 
    
    " & " WILL LOCATE Queue-VARIABLE IN MEMORY ALLOCATION */

    printf("Type Total Bill Amount Of Customer:Rs.");

    scanf("%f",&Amount);            /* " %f " WILL SCAN THE VALUE AND STORE IT IN Amount-VARIABLE
            
    " & " WILL LOCATE Amount-VARIABLE IN MEMORY ALLOCATION */
    
    printf("Type Rating Of Customer:");  

    scanf("\n%c",&Rate);            /* " %c " WILL SCAN THE VALUE AND STORE IT IN Rate-VARIABLE

    " & " WILL LOCATE Rate-VARIABLE IN MEMORY ALLOCATION */

    printf("\n\nDETAILS OF THE CUSTOMER:\n");
    printf("Name:%s\n",Name);
    printf("Phone:%s\n",Phone);
    printf("Queue:%d\n",Queue);
    printf("Total Bill Amount:Rs.%f\n",Amount);
    printf("Rating:%c\n",Rate);
    return 0;

}
