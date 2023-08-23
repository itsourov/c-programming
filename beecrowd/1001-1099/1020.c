#include <stdio.h>

int main(void)
{

    int durationInDays;
    int years, months, days;
    scanf("%d", &durationInDays);

    years = durationInDays / 365;
    durationInDays -= years * 365;

    months = durationInDays / 30;
    durationInDays -= months * 30;

    days = durationInDays;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}
