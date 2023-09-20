#include <stdio.h>
int main()
{

    int count;
    for (int i = 1; i <= 5; i++)
    {
        count = 1;
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
        printf("\n");
    }
}
//      1
//     12
//    123
//   1234
//  12345