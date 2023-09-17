#include <stdio.h>

int main()
{
    int a, b, mean;
    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }
        mean = (a * 3) - a - b;

        printf("%d\n", mean);
    }
}

// x+1+2=1*2