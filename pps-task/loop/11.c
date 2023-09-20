#include <stdio.h>

int main()
{
    for (int index = 1; index <= 5; index++)
    {
        for (int i = 1; i <= index; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    for (int index = 5; index > 1; index--)
    {
        for (int i = 1; i < index; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1