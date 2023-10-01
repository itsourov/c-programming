#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    int DimaIsCorrect = 1;
    int price, quality;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &price, &quality);
        if (price < quality)
        {
            DimaIsCorrect = 0;
        }
    }
    if (DimaIsCorrect)
    {
        printf("Poor Alex\n");
    }
    else
    {
        printf("Happy Alex\n");
    }
}