#include <stdio.h>
int main()
{
    int testCase;
    double smallest, time;
    while (scanf("%d", &testCase) != EOF)
    {

        for (int i = 0; i < testCase; i++)
        {
            scanf("%lf", &time);
            if (i == 0 || time < smallest)
            {
                smallest = time;
            }
        }
        printf("%.2lf\n", smallest);
    }
}