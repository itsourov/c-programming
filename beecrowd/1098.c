#include <stdio.h>
int main(void)
{

    double secondCount = 1;
    for (double i = 0; i <= 2; i += 0.2)
    {
        printf("I=%g J=%g\n", i, secondCount);
        printf("I=%g J=%g\n", i, secondCount + 1);
        printf("I=%g J=%g\n", i, secondCount + 2);

        secondCount += 0.2;
    }
}