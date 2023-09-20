#include <stdio.h>
int main()
{

    int count;
    for (int i = 1; i <= 5; i++)
    {
        count = 1;
        for (int j = 1; j <= 5; j++)
        {

            if (i > j)
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
//  12345
//   1234
//    123
//     12
//      1