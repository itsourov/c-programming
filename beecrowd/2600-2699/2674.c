#include <stdio.h>
int isPrime(int number)
{
    if (number < 2)
    {
        return 0;
    }

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {

            return 0;
        }
    }
    return 1;
}

int isSuperPrime(int number)
{
    while (number > 0)
    {
        int digit = number % 10;
        if (!isPrime(digit))
        {
            return 0;
        }
        number = number / 10;
    }
    return 1;
}

int main()
{
    int number;

    while (scanf("%d", &number) != EOF)
    {
        if (isPrime(number))
        {
            if (isSuperPrime(number))
            {
                printf("Super\n");
            }
            else
            {
                printf("Primo\n");
            }
        }
        else
        {
            printf("Nada\n");
        }
    }
}
