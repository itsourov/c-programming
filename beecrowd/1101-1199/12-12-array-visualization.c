#include <stdio.h>

int main()
{

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {

            if (j > i && 11 - i < j)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
