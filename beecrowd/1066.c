#include <stdio.h>
int main(void)
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int array[5] = {a, b, c, d, e};

    int numberOfPositiveNumber = 0;
    int numberOfNegativeNumber = 0;
    int numberOfOddNumber = 0;
    int numberOfEvenNumber = 0;

    for (int i = 0; i < 5; i++)
    {

        if (array[i] % 2 == 0)
        {
            numberOfEvenNumber++;
        }
        else
        {
            numberOfOddNumber++;
        }

        if (array[i] > 0)
        {
            numberOfPositiveNumber++;
        }
        if (array[i] < 0)
        {
            numberOfNegativeNumber++;
        }
    }

    printf("%d valor(es) par(es)\n", numberOfEvenNumber);
    printf("%d valor(es) impar(es)\n", numberOfOddNumber);
    printf("%d valor(es) positivo(s)\n", numberOfPositiveNumber);
    printf("%d valor(es) negativo(s)\n", numberOfNegativeNumber);
}