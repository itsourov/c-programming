#include <stdio.h>
int main()
{
    int number, temp;
    scanf("%d", &number);

    temp = number / 1000;
    if (temp > 0)
        printf("M");
    number = number - temp * 1000;

    temp = number / 500;
    if (temp > 0)
        printf("D");
    number = number - temp * 500;

    temp = number / 100;
    if (temp > 0)
        printf("C");
    number = number - temp * 100;

    temp = number / 50;
    if (temp > 0)
        printf("L");
    number = number - temp * 50;

    temp = number / 10;
    if (temp > 0)
    {
        for (int i = 0; i < temp; i++)
        {
            printf("X");
        }
    }
    number = number - temp * 10;

    temp = number / 5;
    if (temp > 0)
        printf("V");
    number = number - temp * 5;

    if (number == 4)
    {
        printf("IV");
    }
    else if (number == 3)
    {
        printf("III");
    }
    else if (number == 2)
    {
        printf("II");
    }
    else if (number == 1)
    {
        printf("I");
    }


    printf("\n");
}