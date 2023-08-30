#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (i == number)
        {
            printf("Ho!\n");
        }
        else
        {
            printf("Ho ");
        }
    }
}