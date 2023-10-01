#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    char a[1100], b[1100];
    scanf("%s %s", a, b);
    int totalMoves = 0;
    int diff;
    for (int i = 0; i < n; i++)
    {
        diff = b[i] - a[i];
        if (diff < 0)
        {
            diff *= -1;
        }

        if (diff > 5)
        {
            diff = 10 - diff;
        }
        // printf("diff : %d\n", diff);
        totalMoves += diff;
    }

    printf("%d\n", totalMoves);
}