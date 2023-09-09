#include <stdio.h>
int main()
{
    int holeDistance, speed, distance, isPossible;
    while (1)
    {
        scanf("%d %d", &holeDistance, &speed);
        if (holeDistance == 0 && speed == 0)
        {
            break;
        }

        isPossible = 0;

        for (int index = 0; index < speed; index++)
        {

            int tempSpeed = speed;
            distance = 0;
            while (tempSpeed > 0)
            {
                for (int i = 0; i < tempSpeed; i++)
                {
                    distance += tempSpeed;
                    // printf("%d-", distance);
                    if (distance == holeDistance)
                    {
                        isPossible = 1;
                    }
                }
                tempSpeed--;
            }

            speed--;
        }

        printf("%s\n", isPossible ? "possivel" : "impossivel");
    }
}