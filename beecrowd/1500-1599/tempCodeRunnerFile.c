#include <stdio.h>
int main()
{
    int numberOfSlug, speed, i, sum = 0, shouldBreak = 0;
    double average;
    while (scanf("%d", &numberOfSlug) != EOF)
    {
        for (i = 0; i < numberOfSlug; i++)
        {
            if (scanf("%d", &speed) != EOF)
            {
                break;
                shouldBreak = 1;
            }

            sum += speed;
        }


        average = sum / numberOfSlug;

        if (average > 20)
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
        
        if (shouldBreak=1)
        {
           break;
        }
        
    }
}