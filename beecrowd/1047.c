#include <stdio.h>
int main(void)
{
    int startHour, startMin, endHour, endMin;
    scanf("%d %d %d %d", &startHour, &startMin, &endHour, &endMin);

    int totalTImeInMin = 0;

    int startingTimeInMin = startHour * 60 + startMin;
    int endingTimeInMin = endHour * 60 + endMin;
    if (endingTimeInMin <= startingTimeInMin)
    {
        totalTImeInMin = 24 * 60 - startingTimeInMin + endingTimeInMin;
    }
    else
    {
        totalTImeInMin = endingTimeInMin - startingTimeInMin;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalTImeInMin / 60, totalTImeInMin % 60);

    return 0;
}