#include <stdio.h>
int main(void)
{
    int times;
    scanf("%d", &times);
    for (int i = 1; i <= times; i++)
    {
        if (i == times)
        {
            if (i % 2 == 0)
            {
                printf("I love it\n");
            }
            else
            {
                printf("I hate it\n");
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                printf("I love that ");
            }
            else
            {
                printf("I hate that ");
            }
        }
    }
}