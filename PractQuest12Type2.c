#include<stdio.h>

int main()
{
    char ch;
    
    printf("Enter character:");
    scanf("%c",&ch);

    if(ch>=65&&ch<=90)    // ASCII value for Upper case english letters begins at 65 and ends at 90
    {
        printf("The character entered by user is Upper case");
    }
    else if(ch>=97&&ch<=122)   // ASCII value for Lower case english letters begins at 97 and ends at 122
    {
        printf("The character entered by user is Lower case");
    }
    else
    {
        printf("The character entered by user is not an English letter");
    }
    return 0;
}