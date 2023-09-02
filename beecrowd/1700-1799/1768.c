#include <stdio.h>
int main()
{
    int number, count, i, j;
    while (scanf("%d", &number) != EOF)
    {
        count = 0;
        for (i = 0; i < number; i += 2)
        {
            count++;
        }

        char tree[count + 2][number];
        for (i = 0; i < count + 2; i++)
        {
            for (j = 0; j < number; j++)
            {
                tree[i][j] = ' ';
            }
        }

        tree[count][number / 2] = '*';
        tree[count][(number / 2) + 1] = '\0';
        tree[count + 1][number / 2] = '*';
        tree[count + 1][(number / 2) - 1] = '*';
        tree[count + 1][(number / 2) + 1] = '*';
        tree[count + 1][(number / 2) + 2] = '\0';

        for (i = 0; i < count; i++)
        {
            for (j = 0; j < number; j++)
            {

                if (j > (number / 2) - i - 1 && j < (number / 2) + i + 1)
                {
                    tree[i][j] = '*';
                }

                if (j > (number / 2) - i && j > (number / 2) + i)
                {
                    tree[i][j] = '\0';
                }
            }
        }

        for (i = 0; i < count + 2; i++)
        {
            for (j = 0; j < number; j++)
            {
                if (tree[i][j] == '\0')
                {
                    break;
                }

                printf("%c", tree[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}