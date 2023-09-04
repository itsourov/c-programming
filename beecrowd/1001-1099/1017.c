#include <stdio.h>
int main()
{
    int totalTime, averageSpeed;

    scanf("%d %d", &totalTime, &averageSpeed);

    printf("%.3lf\n", (totalTime * averageSpeed) / 12.0);
}