#include <stdio.h>
int main(void)
{
    int number, times;

    scanf("%d %d", &number, &times);
    for (int i = 0; i < times; i++)
    {
        if (number % 10 == 0)
        {
            number = number / 10;
        }
        else
        {
            number = number - 1;
        }
    }
    printf("%d\n", number);
}