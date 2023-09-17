#include <stdio.h>
#include <math.h>

int main()
{

    int testCase, n;
    long long int bignumber;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d", &n);

        int mod = n % 4;

        if (mod == 1)
        {
            printf("7");
        }
        if (mod == 2)
        {
            printf("9");
        }
        if (mod == 3)
        {
            printf("3");
        }
        if (mod == 0)
        {
            printf("1");
        }
        printf("\n");
    }
}
