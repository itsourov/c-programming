#include <stdio.h>

int main()
{

    int testCase, number, multiplesOf2 = 0, multiplesOf3 = 0, multiplesOf4 = 0, multiplesOf5 = 0;
    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            multiplesOf2++;
        }
        if (number % 3 == 0)
        {
            multiplesOf3++;
        }
        if (number % 4 == 0)
        {
            multiplesOf4++;
        }
        if (number % 5 == 0)
        {
            multiplesOf5++;
        }
    }
    printf("%d Multiplo(s) de 2\n", multiplesOf2);
    printf("%d Multiplo(s) de 3\n", multiplesOf3);
    printf("%d Multiplo(s) de 4\n", multiplesOf4);
    printf("%d Multiplo(s) de 5\n", multiplesOf5);
}
