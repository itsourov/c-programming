#include <stdio.h>
int main(void)
{

    int secondCount = 7;
    for (int i = 1; i <= 9; i += 2)
    {
        printf("I=%d J=%d\n", i, secondCount);
        printf("I=%d J=%d\n", i, secondCount - 1);
        printf("I=%d J=%d\n", i, secondCount - 2);

        secondCount += 2;
    }
}