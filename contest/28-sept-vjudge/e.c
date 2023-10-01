#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    int hour, min;
    int totalMin;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &hour, &min);
        totalMin = 0;
        if (min == 0)
        {
            totalMin += (24 - hour) * 60;
        }
        else
        {
            totalMin += (24 - hour - 1) * 60;
            totalMin += 60 - min;
        }
        printf("%d\n", totalMin);
    }
}