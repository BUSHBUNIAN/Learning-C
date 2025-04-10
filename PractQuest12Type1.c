#include<stdio.h>

int main()
{
    char ch;
    
    printf("Enter character:");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z')    // ASCII value for Upper case english letters begins at 65 and ends at 90
    {
        printf("The character entered by user is Upper case");
    }
    else if(ch>='a'&&ch<='z')   // ASCII value for Lower case english letters begins at 97 and ends at 122
    {
        printf("The character entered by user is Lower case");
    }
    else
    {
        printf("The character entered by user is not an English letter");
    }
    return 0;
}