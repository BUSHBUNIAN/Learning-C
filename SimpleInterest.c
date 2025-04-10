#include<stdio.h>
#include<math.h>

/* Simple Interest= Principal * Rate% * Time = (Principal * Rate * Time)/100

SIMPLE INTEREST: A method to calculate the amount of interest charged on a sum at a given rate and for a given period of time.
Principal amount is always same here.

LOAN: An amount that a person borrows from a bank or a financial authority to fulfill their needs. 
A Loan amount is required to be returned on time with an extra amount, which is known as Interest.

PRINCIPAL: The amount that initially borrowed from the bank or invested.
Principal is denoted by P.

RATE: The rate of interest at which the PRINCIPAL amount is given to someone for a certain time.
Rate of interest can be 5%=5/100, 10%=10/100, or 13%=13/100 etc. 
Rate of interest is denoted by R.

TIME: The duration for which the PRINCIPAL amount is given to someone.
Time is denoted by T.

Amount= Principal + Simple Interest

AMOUNT: The total amount i.e PRINCIPAL borrowed plus INTEREST amount has to be returned to the bank or financial authority by the borrower.
Amount is denoted by A. */

int main()
{
    float P;
    float R;
    float T;
    printf("Enter Principal=");
    scanf("%f",&P);
    printf("Enter Rate of interest=");
    scanf("%f",&R);
    printf("Enter Time period=");
    scanf("%f",&T);
    float SI=(P*R*T)/100;
    printf("Simple Interest is %f\n",SI);
    float A= P+SI;
    printf("Amount=%f\n",A);
    return 0;
}