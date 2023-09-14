#include <stdio.h>
#include <string.h>
int main()
{
    char alphabetList[27];
    int numberOfWord, charPositionAsInput;
    while (scanf("%s", alphabetList) != EOF)
    {
        scanf("%d", &numberOfWord);
        while (numberOfWord--)
        {
            scanf("%d", &charPositionAsInput);

            printf("%c", alphabetList[charPositionAsInput - 1]);
        }
        printf("\n");
    }
}