#include <stdio.h>
int main()
{
    int numberOfSlug, speed, i, sum;
    double average;
    while (scanf("%d", &numberOfSlug) != EOF)
    {
        sum = 0;
        for (i = 0; i < numberOfSlug; i++)
        {
            scanf("%d", &speed);
            sum += speed;
        }

        average = sum / numberOfSlug;

        if (average >= 20)
        {
            printf("3\n");
        }
        else if (average < 10)
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
}