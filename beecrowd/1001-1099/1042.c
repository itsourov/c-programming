#include <stdio.h>
int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("%d\n", c);
            printf("%d\n", b);
        }
        else
        {
            printf("%d\n", b);
            printf("%d\n", c);
        }
        printf("%d\n", a);
    }
    else if (b > a && b > c)
    {

        if (a > c)
        {
            printf("%d\n", c);
            printf("%d\n", a);
        }
        else
        {
            printf("%d\n", a);
            printf("%d\n", c);
        }

        printf("%d\n", b);
    }
    else
    {

        if (a > b)
        {
            printf("%d\n", b);
            printf("%d\n", a);
        }
        else
        {
            printf("%d\n", a);
            printf("%d\n", b);
        }
        printf("%d\n", c);
    }

    printf("\n%d\n%d\n%d\n", a, b, c);
}