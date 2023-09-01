#include <stdio.h>
int main()
{
    char names[10][31];

    for (int i = 0; i < 10; i++)
    {
        scanf("%s", names[i]);
    }
    printf("%s\n", names[2]);
    printf("%s\n", names[6]);
    printf("%s\n", names[8]);
}
