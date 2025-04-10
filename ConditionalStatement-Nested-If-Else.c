 #include<stdio.h>

 int main()
 {
    int num;
    printf("Enter number:");
    scanf("%d", &num);

    if(num>=1)
    {
        printf("The number %d is positive.\n",num);

        if(num%2==0)
        {
            printf("The number %d is even.\n",num);
        }
        else
        {
            printf("The number %d is odd.",num);
        }

    }
    else 
    {
        printf("The number %d is negative.",num);
    }    
    
 }