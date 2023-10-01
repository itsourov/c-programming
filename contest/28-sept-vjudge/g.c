#include <stdio.h>
int main()
{
    int testCase, i;
    int a, b, c;
    scanf("%d", &testCase);
    for (i = 1; i <= testCase; i++)

    {
        scanf("%d %d %d", &a, &b, &c);

        if ((b + c) % a == 0)
        {
            printf("Case %d: %d\n", i, a);
        }
        else
        {
            printf("Case %d: %d\n", i, (b + c) % a);
        }
    }
}