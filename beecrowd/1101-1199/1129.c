#include <stdio.h>
int main()
{
    int testCase;
    char alpha[5] = "ABCDE";

    while (1)
    {
        scanf("%d", &testCase);
        if (testCase == 0)
        {
            break;
        }

        for (int i = 0; i < testCase; i++)
        {
            int numbers[5];
            scanf("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);

            int position, count = 0;
            for (int i = 0; i < 5; i++)
            {
                if (numbers[i] <= 127)
                {
                    position = i;
                    count++;
                }
            }
            if (count == 1)
            {
                printf("%c\n", alpha[position]);
            }
            else
            {
                printf("*\n");
            }
        }
    }
}