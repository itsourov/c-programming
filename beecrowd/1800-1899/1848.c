#include <stdio.h>
#include <string.h>
int main()
{

    int count;

    for (int index = 0; index < 3; index++)
    {
        char string[100];
        int count = 0;
        while (1)
        {

            fgets(string, 100, stdin);
            if (string[0] == 'c')
            {
                break;
            }
            int bin = 0;
            if (string[0] == '*')
            {
                bin += 4;
            }
            if (string[1] == '*')
            {
                bin += 2;
            }
            if (string[2] == '*')
            {
                bin += 1;
            }
            count += bin;
        }
        printf("%d\n", count);
    }

    return 0;
}
