#include <stdio.h>
int main(void)
{

    int x;
    scanf("%d", &x);

    int numberOfOddNumber = 0;
    for (int i = x; numberOfOddNumber < 6; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
            numberOfOddNumber++;
        }
    }
}