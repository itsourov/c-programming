#include <stdio.h>

int main()
{
    int chickenAvailable, beefAvailable, pastaAvailable;
    int chickenRequested, beefRequested, pastaRequested;
    int unluckyCustomer;

    scanf("%d %d %d", &chickenAvailable, &beefAvailable, &pastaAvailable);
    scanf("%d %d %d", &chickenRequested, &beefRequested, &pastaRequested);

    if (chickenAvailable < chickenRequested)
    {
        unluckyCustomer = chickenRequested - chickenAvailable;
    }

    if (beefAvailable < beefRequested)
    {
        unluckyCustomer += beefRequested - beefAvailable;
    }
    if (pastaAvailable < pastaRequested)
    {
        unluckyCustomer += pastaRequested - pastaAvailable;
    }
    printf("%d\n", unluckyCustomer);
}
