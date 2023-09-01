#include <stdio.h>
int main(void)
{
    int sum = 0, count = 0, age;
    while (1)
    {
        scanf("%d", &age);
        if (age < 0)
        {
            break;
        }

        sum += age;
        count++;
    }
    printf("%.2lf\n", (double)sum / count);
}