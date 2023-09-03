#include <stdio.h>

int main()
{
    int numberOfUniversity, total = 0, contestent;
    scanf("%d", &numberOfUniversity);
    for (int i = 0; i < numberOfUniversity; i++)
    {
        scanf("%d", &contestent);
        total += contestent - contestent % 3;
    }
    printf("%d\n", total);
}
