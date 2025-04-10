#include<stdio.h>

int main()
{
    char Name[20]; // WE HAVE TO SPECIFY THE SIZE OF STRINGS. WE CAN KEEP OR REMOVE ' * ' BETWEEN char AND Name
    printf("Type your Name:");
    scanf("%s",&Name); //WE CAN KEEP OR REMOVE ' & ' SYMBOL BEFORE Name
    printf("My Name is %s\n",Name);
    return 0;
}