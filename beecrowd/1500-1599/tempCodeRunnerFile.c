#include <stdio.h>

int isPossibleFun(int speed, int distance)
{
    int distanceAchived = 0;
    while (speed > 0 && distanceAchived < distance)
    {
        for (int i = 0; i < speed; i++)
        {
            distanceAchived += speed;
            if (distanceAchived == distance)
            {
                return 1;
            }
        }
        speed--;
    }
    return 0;
}
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

        if (isPossibleFun(speed, holeDistance))
        {
            isPossible = 1;
        }

        printf("%s\n", isPossible ? "possivel" : "impossivel");
    }
}