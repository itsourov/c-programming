#include <stdio.h>
#include <string.h>

int main()
{
    int testCase, totalWordCount = 0;
    double price, priceSum = 0;
    char frutes[100000];
    scanf("%d", &testCase);

    for (int index = 0; index < testCase; index++)
    {
        scanf("%lf", &price);
        priceSum += price;
        getchar();
        fgets(frutes, 100000, stdin);

        char *word = strtok(frutes, " ");
        int wordCount = 0;
        while (word != NULL)
        {
            wordCount++;
            word = strtok(NULL, " ");
        }
        totalWordCount += wordCount;

        printf("day %d: %d kg\n", index + 1, wordCount);
    }
    printf("%.2lf kg by day\n", (double)totalWordCount / testCase);
    printf("R$ %.2lf by day\n", (double)priceSum / testCase);
}