#include <stdio.h>
int main(void)
{
    int temp;
    printf("Enter temperature in centigrade: ");
    scanf("%d", &temp);

    if (temp >= 40)
    {
        printf("Its Very Hot\n");
    }
    else if (temp >= 30)
    {
        printf("Its  Hot\n");
    }
    else if (temp >= 20)
    {
        printf("Normal in Temp\n");
    }
    else if (temp >= 10)
    {
        printf("Cold weather\n");
    }
    else if (temp >= 0)
    {
        printf("Very Cold weather\n");
    }
    else
    {
        printf("Freezing weather\n");
    }
}