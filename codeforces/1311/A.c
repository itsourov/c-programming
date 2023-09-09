#include <stdio.h>

int main()
{
    int testCase, a, b;
    scanf("%d", &testCase);

    for (int index = 0; index < testCase; index++)
    {
        scanf("%d %d", &a, &b);
        if (a == b)
        {
            printf("0\n");
        }
        else if ((b > a && (b - a) % 2 != 0) || (b < a && (a - b) % 2 == 0))
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
}