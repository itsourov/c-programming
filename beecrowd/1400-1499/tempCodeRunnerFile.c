#include <stdio.h>
int main()
{
    int a, b, c;
    int sobceyeBoroNumber;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        sobceyeBoroNumber = a;
    }
    else if (b > a && b > c)
    {
        sobceyeBoroNumber = b;
    }
    else
    {
        sobceyeBoroNumber = c;
    }
    printf("%d eh o maior\n", sobceyeBoroNumber);

    return 0;
}