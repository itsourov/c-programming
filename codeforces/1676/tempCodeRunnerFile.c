#include <stdio.h>

int main()
{
    int testCase;
    char number[6];
    scanf("%d", &testCase);

    for (int index = 0; index < testCase; index++)
    {
        scanf("%s", number);

        if (number[0] + number[1] + number[2] == number[3] + number[4] + number[5])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}