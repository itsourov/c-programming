#include <stdio.h>
#include <stdlib.h>
void happy()
{
    printf(":)\n");
}
void sad()
{
    printf(":(\n");
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && b < c)
    {
        happy();
    }
    else if (a < b && b > c)
    {
        sad();
    }

    else if (b > a && c > b && c - b < b - a)
    {
        sad();
    }
    else if (b > a && c > b && c - b >= b - a)
    {
        happy();
    }
    else if (b < a && c < b && (c - b) < abs(b - a))
    {
        happy();
    }
    else if (b < a && c < b && abs(c - b) <= (b - a))
    {
        sad();
    }
    else if (b == a && c - b > b - a)
    {
        happy();
    }
    else
    {
        sad();
    }
}