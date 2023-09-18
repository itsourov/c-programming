#include <stdio.h>

int main()
{
    for (int i = 1; i < 100; i++)
    {
        printf("%d = %d\n", i, i * (i + 1) / 2);
    }
}