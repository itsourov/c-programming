#include <stdio.h>

int main(void)
{
    int teaType, i;
    while (scanf("%d", &teaType) != EOF)
    {

        int count = 0;
        int input;
        for (i = 0; i < 5; i++)
        {
            scanf("%d", &input);
            if (input == teaType)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}