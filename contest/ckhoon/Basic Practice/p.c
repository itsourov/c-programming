#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    if (n <= m)
    {
        int diff = m - n;
        if (diff > 1)
        {
            printf("Dr. Chaz will have %d pieces of chicken left over!\n", diff);
        }
        else
        {
            printf("Dr. Chaz will have %d piece of chicken left over!\n", diff);
        }
    }
    else
    {
        int diff = n - m;
        if (diff > 1)
        {
            printf("Dr. Chaz needs %d more pieces of chicken!\n", diff);
        }
        else
        {
            printf("Dr. Chaz needs %d more piece of chicken!\n", diff);
        }
    }
}
