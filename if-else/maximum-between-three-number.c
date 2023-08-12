#include <stdio.h>
int main(void)
{
    int a, b, c, biggestNumber;
    printf("Enter first number ");
    scanf("%d", &a);

    printf("Enter second number ");
    scanf("%d", &b);

    printf("Enter third number ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        biggestNumber = a;
    }
    else if (b >= c && b >= a)
    {
        biggestNumber = b;
    }
    else
    {
        biggestNumber = c;
    }

    printf("%d is the biggest number\n", biggestNumber);
}