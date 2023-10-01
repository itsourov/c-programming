#include <stdio.h>
#include <string.h>

int main()
{
    char word[15];
    scanf("%s", word);

    int len = strlen(word);

    char alphabet;
    int number, maxNumber, times;

    for (int i = 'a'; i <= 'z'; i++)
    {
        number = 0;
        int lTimes = 0;
        for (int j = 0; j < len; j++)
        {
            if (word[j] == i)
            {
                number += i;
                lTimes++;
            }
        }

        if (i == 'a' || number > maxNumber)
        {
            alphabet = i;
            times = lTimes;
        }
    }

    for (int i = 0; i < times; i++)
    {
        printf("%c", alphabet);
    }
    printf("\n");
}
