#include <stdio.h>
#include <math.h>

int main()
{
    int testCase, bin, pos, digit, decimal;
    while (scanf("%d", &testCase) != EOF)
    {
        for (int i = 0; i < testCase; i++)
        {
            scanf("%d", &bin);
            decimal = 0;
            pos = 0;
            while (bin > 0)
            {
                digit = bin % 10;
                decimal += digit * pow(2, pos);
                bin /= 10;
                pos++;
            }
            printf("%c", decimal);
        }
        printf("\n");
    }
}
