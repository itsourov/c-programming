#include <stdio.h>
int main(void)
{

    int x;
    scanf("%d", &x);

    int temp;
    for (int i = 1; i <= 1000; i++)
    {
        if (i % temp == 2)
        {
            printf("%d\n", i);
        }
    }
}