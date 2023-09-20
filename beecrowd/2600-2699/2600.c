#include <stdio.h>

int main()
{

    int testCase;
    scanf("%d", &testCase);
    while (testCase--)
    {
        int side[6];
        scanf("%d", &side[2]);
        scanf("%d %d %d %d", &side[0], &side[1], &side[5], &side[4]);
        scanf("%d", &side[3]);

        int temp[6] = {0, 0, 0, 0, 0, 0};
        int hasAllNum = 1;
        for (int i = 0; i < 6; i++)
        {
            if (side[i] <= 6)
            {
                temp[side[i] - 1] = 1;
            }
            else
            {
                hasAllNum = 0;
            }
        }

        for (int i = 0; i < 6; i++)
        {

            if (temp[i] == 0)
            {
                hasAllNum = 0;
            }
        }

        if (side[0] + side[5] == 7 && side[1] + side[4] == 7 && side[2] + side[3] == 7 && hasAllNum)
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    }
}