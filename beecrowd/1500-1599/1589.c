#include <stdio.h>
int main()
{
    int testCase, a, b;
    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}