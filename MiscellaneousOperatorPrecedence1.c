#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, d, e;

    printf("a=");
    scanf("%i", &a);

    printf("b=");
    scanf("%d", &b);

    printf("c=");
    scanf("%i", &c);

    printf("d=");
    scanf("%i", &d);

    printf("e=");
    scanf("%d", &e);

    printf("\n%i", a+b-c+d*e);

    printf("\n\n%d", 4*3*5);

    printf("\n\n%i", 4>2);

    printf("\n\n%d", (a+b-c+d*e) > (4*3*5) && (4>2));

    return 0;
}