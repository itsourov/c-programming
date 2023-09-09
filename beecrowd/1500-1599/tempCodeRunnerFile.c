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
        distance = 0;
        isPossible = 0;

        while (speed > 0)
        {
            for (int i = 0; i < speed; i++)
            {
                distance += speed;
                // printf("%d-", distance);
                if (distance == holeDistance)
                {
                    isPossible = 1;
                }
            }
            speed--;
        }
        printf("%s\n", isPossible ? "possivel" : "impossivel");
    }
}