#include <stdio.h>

int main()
{

    for (int i = 0; i <= 5; i++)
    {
        int count = i;
        for (int j = 0; j <= 5; j++)
        {

            if (5 - i > j)
            {
                printf(" ");
            }
            else
            {
                printf("%d", count);
                count--;
            }
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}

//           0
//         1 0 1
//       2 1 0 1 2
//     3 2 1 0 1 2 3
//   4 3 2 1 0 1 2 3 4
// 5 4 3 2 1 0 1 2 3 4 5