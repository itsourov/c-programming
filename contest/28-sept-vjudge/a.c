#include <stdio.h>
int main()
{
    int n, i, input;
    scanf("%d", &n);

    int isHard = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &input);
        if (input == 1)
        {
            isHard = 1;
        }
    }
    if (isHard)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }
}