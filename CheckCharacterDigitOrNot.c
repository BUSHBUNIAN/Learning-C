#include<stdio.h>
#include<math.h>

int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c", &ch);

    if(ch >= '0' && ch <= '9')
    {
        printf("%c is a digit", ch);
    }
    else
    {
        printf("%c is not a digit", ch);
    }
    return 0;

}