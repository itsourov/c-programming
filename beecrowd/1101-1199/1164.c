#include <stdio.h>
int main()
{
    int testCase, x, temp;
    scanf("%d", &testCase);
    for (int index = 0; index < testCase; index++)
    {
        temp = 0;
        scanf("%d", &x);
        for (int i = 1; i < x; i++)
        {
            if (x % i == 0)
            {
                temp += i;
            }
        }
        if (temp == x)
        {
            printf("%d eh perfeito\n", x);
        }
        else
        {
            printf("%d nao eh perfeito\n", x);
        }
    }
}