#include <stdio.h>
int main(void)
{

    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int numberOfEvenNumber = 0;

    if (a % 2 == 0)
    {
        numberOfEvenNumber++;
    }

    if (b % 2 == 0)
    {
        numberOfEvenNumber++;
    }

    if (c % 2 == 0)
    {
        numberOfEvenNumber++;
    }
    if (d % 2 == 0)
    {
        numberOfEvenNumber++;
    }
    if (e % 2 == 0)
    {
        numberOfEvenNumber++;
    }

    printf("%d valores pares\n", numberOfEvenNumber);
}