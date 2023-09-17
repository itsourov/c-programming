#include <stdio.h>

int main()
{
    int start_day, start_hour, start_minute, start_second;
    int end_day, end_hour, end_minute, end_second;

    scanf("Dia %d %d : %d : %d", &start_day, &start_hour, &start_minute, &start_second);
    scanf("Dia %d %d : %d : %d", &end_day, &end_hour, &end_minute, &end_second);

    long long int diffInSec = (end_second + end_minute * 60 + end_hour * 60 * 60 + end_day * 60 * 60 * 24) -
                              (start_second + start_minute * 60 + start_hour * 60 * 60 + start_day * 60 * 60 * 24);

    // printf("%d dia(s)\n", diffInSec / (60 * 60 * 24));
    // printf("%d hora(s)\n", diffInSec / (60 * 60));
    // printf("%d minuto(s)\n", diffInSec / (60));
    // printf("%d segundo(s)\n", diffInSec);

    printf("diff in sec %lld,\n", diffInSec);
    return 0;
}
