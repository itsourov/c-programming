#include <stdio.h>

int main(void)
{

    int durationInSecond;
    int hours, mins, seconds;
    scanf("%d", &durationInSecond);

    hours = durationInSecond / 3600;
    durationInSecond -= hours * 3600;

    mins = durationInSecond / 60;
    durationInSecond -= mins * 60;

    seconds = durationInSecond;

    printf("%d:%d:%d\n", hours, mins, seconds);

    return 0;
}
