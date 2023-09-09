#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[1100];
    fgets(sentence, 1100, stdin);
    printf("%s\n", sentence);

    if (strcmp(sentence, "Flowers Flourish from France"))
    {
        printf("matched\n");
    }
    else
    {
        printf("not matched\n");
    }
}