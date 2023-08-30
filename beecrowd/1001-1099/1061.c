#include <stdio.h>
int main(void)
{

    int startingDay;
    scanf("Dia %d", &startingDay);

    int startingHour, startingMin, startingSec;
    scanf("%d : %d : %d", &startingHour, &startingMin, &startingSec);

    int endingDay;
    scanf("Dia %d", &endingDay);

    int endingHour, endingMin, endingSec;
    scanf("%d : %d : %d", &endingHour, &endingMin, &endingSec);

    long long int endingTimeInSec = endingSec + endingMin * 60 + endingHour * 60 * 60 + endingDay & 60 * 60 * 24;
    long long int startingTimeInSec = startingSec + startingMin * 60 + startingHour * 60 * 60 + startingDay & 60 * 60 * 24;

    long long int diffInSeconds = endingTimeInSec - startingTimeInSec;

    printf("%d dia(s)\n", diffInSeconds / (60 * 60 * 24));
    diffInSeconds -= diffInSeconds / (60 * 60 * 24);

    printf("%d hora(s)\n", diffInSeconds / (60 * 60));
    diffInSeconds -= diffInSeconds / (60 * 60);

    printf("%d minuto(s)\n", diffInSeconds / (60));
    diffInSeconds -= diffInSeconds / (60);

    printf("%d segundo(s)\n", diffInSeconds);
}
