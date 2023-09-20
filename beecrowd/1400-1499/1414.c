#include <stdio.h>
int main()
{
    int numberOfTeams, numerOfMatchPlayed, point, totalpoint, temp;
    char team[20];

    while (1)
    {
        temp = 0;
        scanf("%d %d", &numberOfTeams, &numerOfMatchPlayed);
        totalpoint = 3 * numerOfMatchPlayed;
        if (numberOfTeams == 0)
        {
            break;
        }

        for (int i = 0; i < numberOfTeams; i++)
        {
            scanf("%s %d", team, &point);

            temp += point;
        }
        printf("%d\n", totalpoint - temp);
    }
}