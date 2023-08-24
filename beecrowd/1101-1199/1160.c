#include <stdio.h>
int main()
{
    int testCase;
    int PA, PB, Year;
    double GA, GB;

    scanf("%d", &testCase);
    for (int index = 1; index <= testCase; index++)
    {
        Year = 0;
        scanf("%d %d %lf %lf", &PA, &PB, &GA, &GB);
        for (int i = 0; i < 150; i++)
        {

            // printf("current PA = %d\n", PA);
            // printf("this year PA will get = %.lf\n", (PA * GA) / 100);

            // printf("current PB = %d\n", PB);
            // printf("this year PA will get = %.lf\n", (PB * GB) / 100);

            PA += (PA * GA) / 100;
            PB += (PB * GB) / 100;
            Year++;

            if (PB < PA)
            {
                break;
            }
        }

        if (Year > 100)
        {
            printf("Mais de 1 seculo.\n");
        }
        else
        {
            printf("%d anos.\n", Year);
        }
    }
}