#include <stdio.h>

int main()
{
    int currentPasseger = 0, numberOfStop;
    scanf("%d", &numberOfStop);
    int out, in;
    int maxPassenger = 0;
    while (numberOfStop--)
    {
        scanf("%d %d", &out, &in);
        currentPasseger -= out;
        currentPasseger += in;

        if (currentPasseger > maxPassenger)
        {
            maxPassenger = currentPasseger;
        }
    }

    printf("%d\n", maxPassenger);
}