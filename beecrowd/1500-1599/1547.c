#include <stdio.h>

int getDiff(int a, int b)
{
    if (a > b)
    {
        return a - b;
    }
    else
    {
        return b - a;
    }
    return 0;
}

int main()
{
    int testCase, qt, secreatNumber, closestNumber, position, guess;
    scanf("%d", &testCase);

    for (int tcc = 0; tcc < testCase; tcc++)
    {
        scanf("%d %d", &qt, &secreatNumber);

        for (int i = 1; i <= qt; i++)
        {
            scanf("%d", &guess);
            // printf("diff : %d\n", getDiff(guess, secreatNumber));

            if (i == 1 || getDiff(guess, secreatNumber) < getDiff(closestNumber, secreatNumber))
            {
                closestNumber = guess;
                position = i;
            }
        }
        printf("%d\n", position);
    }
}