#include<stdio.h>

int main()
{
    int mark;
    printf("Enter marks of the student:");
    scanf("%i", &mark);

    if(mark>=90 && mark<=100)
    printf("Grade of the student: A+");
    
    else if(mark>=80 && mark<90)
    printf("Grade of the student: A");

    else if(mark>=70 && mark<80)
    printf("Grade of the student: B+");

    else if(mark>=60 && mark<70)
    printf("Grade of the student: B");

    else if(mark>=50 && mark<60)
    printf("Grade of the student: C+");

    else if(mark>=40 && mark<50)
    printf("Grade of the student: C");

    else if(mark>=30 && mark<40)
    printf("Grade of the student: D");

    else if(mark>=20 && mark<30)
    printf("Grade of the student: E");

    else if(mark>=0 && mark<20)
    printf("Grade of the student: F");

    return 0;
}