#include <stdio.h>
int main()
{

    int count;
    for (int i = 1; i <= 5; i++)
    {
        count = i;
        for (int j = 1; j <= 5; j++)
        {

            if (5 - i >= j)
            {
                printf(" ");
            }
            else
            {
                printf("%d", count);
                count++;
            }
        }
        for (int j = count - 1; j >i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}

//      1
//     232
//    34543
//   4567654
//  567898765