#include <stdio.h>
int main(void)
{

    int x;
    scanf("%d", &x);

    int temp;
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &temp);
        if (temp == 0)
        {
            printf("NULL\n");
        }
        else
        {

            if (temp % 2 != 0)
            {
                printf("ODD");
            }
            else
            {
                printf("EVEN");
            }
            if (temp > 0)
            {
                printf(" POSITIVE\n");
            }
            else if (temp < 0)
            {
                printf(" NEGATIVE\n");
            }
        }
    }
}