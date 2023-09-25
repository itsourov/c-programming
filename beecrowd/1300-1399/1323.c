#include <stdio.h>
#include <math.h>

int main()
{

    int n;
    while (scanf("%d", &n) && n != 0)
    {
        int sum = 0;
        for (int i = n; i > 0; i--)
        {
            sum += i * i;
        }

        printf("%d\n", sum);
    }
}