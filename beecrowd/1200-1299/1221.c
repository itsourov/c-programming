#include <stdio.h>
#include <math.h>

int main()
{
    int testCase, num;
    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        int isprime = 1;
        scanf("%d", &num);
        int temp = sqrt(num);

        if (num < 2)
        {
            isprime = 0;
        }
        else
        {
            for (int i = 2; i < temp + 1; i++)
            {
                if (num % i == 0)
                {
                    isprime = 0;
                    break;
                }
            }
        }
        if (isprime)
        {
            printf("Prime\n");
        }

        else
        {
            printf("Not Prime\n");
        }
    }
}
