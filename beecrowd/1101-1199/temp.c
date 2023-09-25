#include <stdio.h>
int main()
{
    int numberOfStudent, passmark;
    scanf("%d %d", &numberOfStudent, &passmark);
    int count = 0;
    int i;
    int input;
    for (i = 0; i < numberOfStudent; i++)
    {
        scanf("%d", &input);
        if (input < passmark)
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}