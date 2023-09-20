#include <stdio.h>

void happy()
{
    printf(":)");
}
void sad()
{
    printf(":(");
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && b <= c )
    {
        happy();
    }
    else if (a < b &&b >=c)
    {
        sad();
    }
    else if (a < b && b < c && (c - b) < (b - a))
    {
        sad();
    }
    else if (a < b && b < c && (c - b) >= (b - a))
    {
        happy();
    }
    else if (a > b && b > c && (b - c) < (a - b))
    {
        happy();
    }
    else if (a > b && b > c && (b - c) >= (a - b))
    {
        sad();
    }
    else if (a == b && b < c)
    {
        happy();
    }
    else if (a == b && b > c)
    {
        sad();
    }
    else
    {
        sad();
        // printf("%d %d %d", a, b, c);
    }
    printf("\n");
}