#include <stdio.h>
int main(void)
{

    int x;

    int biggestNumber = 0;
    int position = 0;
    for (int i = 1; i <= 100; i++)
    {

        if (x > biggestNumber)
        {
            biggestNumber = x;
            position = i;
        }
    }

    printf("%d\n", biggestNumber);
    printf("%d\n", position);
}