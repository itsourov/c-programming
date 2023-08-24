#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);

    int n1 = 0, n2 = 1, temp;
    if (n >= 1)
    {
        printf("%d ", n1);
    }
    if (n >= 2)
    {
        printf("%d ", n2);
    }
    for (int i = 1; i <= (n - 2); i++)
    {
        if (i == (n - 2))
        {
            printf("%d\n", n2 + n1);
        }
        else
        {
            printf("%d ", n2 + n1);
        }

        temp = n1;
        n1 = n2;
        n2 = temp + n2;
    }
}