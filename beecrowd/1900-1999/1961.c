#include <stdio.h>
#include <math.h>

int main()
{
    int frogMaxAbility, testCase, height, previousHeight = -127, diff;
    scanf("%d %d", &frogMaxAbility, &testCase);

    while (testCase--)
    {

        if (previousHeight != -127)
        {
            previousHeight = height;
        }

        scanf("%d", &height);
        if (previousHeight == -127)
        {
            previousHeight = height;
        }

        diff = (previousHeight - height);
        if (diff < 0)
        {
            diff = diff * (-1);
        }

        if (diff > frogMaxAbility)
        {
            printf("GAME OVER\n");
            return 0;
        }
    }
    printf("YOU WIN\n");
}
