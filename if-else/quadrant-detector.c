#include <stdio.h>
int main(void)
{
    int x, y;
    printf("Enter X coordinate value: ");
    scanf("%d", &x);

    printf("Enter X coordinate value: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
    {
        printf("The point is in 1st quadrant\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("The point is in 2nd quadrant\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("The point is in 3rd quadrant\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("The point is in 4th quadrant\n");
    }
    else
    {
        if (x == 0 && y == 0)
        {
            printf("The point is in starting point\n");
        }
        else if (x == 0 && y != 0)
        {
            printf("The point is on Y axis line\n");
        }
        else if (x != 0 && y == 0)
        {
            printf("The point is on X axis line\n");
        }
    }
}