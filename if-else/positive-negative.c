#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if (a > 0)
    {
        printf("%d is a positive number \n", a);
    }
    else if (a < 0)
    {
        printf("%d is a negative number \n", a);
    }

    else
    {
        printf("%d is a nutral number \n", a);
    }
}