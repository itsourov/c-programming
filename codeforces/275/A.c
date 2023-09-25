#include <stdio.h>
#include <string.h>

int toogle(int value)
{
    if (value == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int isWithinRange(int pos)
{
    if (pos >= 0 && pos <= 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int lights[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int input;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &input);
            while (input--)
            {
                lights[i][j] = toogle(lights[i][j]);

                if (isWithinRange(i + 1))
                {
                    lights[i + 1][j] = toogle(lights[i + 1][j]);
                }
                if (isWithinRange(i - 1))
                {
                    lights[i - 1][j] = toogle(lights[i - 1][j]);
                }

                if (isWithinRange(j + 1))
                {
                    lights[i][j + 1] = toogle(lights[i][j + 1]);
                }
                if (isWithinRange(j - 1))
                {
                    lights[i][j - 1] = toogle(lights[i][j - 1]);
                }
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", lights[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}