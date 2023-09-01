#include <stdio.h>
int main()
{
    int testCase, i, input1, input2, scoreOfPlayer1, scoreOfPlayer2;
    while (1)
    {
        scanf("%d", &testCase);
        if (testCase == 0)
        {
            break;
        }

        scoreOfPlayer1 = 0;
        scoreOfPlayer2 = 0;
        for (i = 0; i < testCase; i++)
        {
            scanf("%d %d", &input1, &input2);
            if (input1 > input2)
            {
                scoreOfPlayer1++;
            }
            if (input2 > input1)
            {
                scoreOfPlayer2++;
            }
        }
        printf("%d %d\n", scoreOfPlayer1, scoreOfPlayer2);
    }
}