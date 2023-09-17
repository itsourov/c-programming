#include <stdio.h>
#include <string.h>

int main()
{
    int numberOfWordInShortStory, maxLinePerPage, maxCharPerLine;

    char story[1010];
    int stringLength, lineCount, tempIndex;

    while (scanf("%d %d %d", &numberOfWordInShortStory, &maxLinePerPage, &maxCharPerLine) != EOF)
    {
        getchar();
        fgets(story, 1010, stdin);
        stringLength = strlen(story);

        lineCount = 1;
        tempIndex = 0;

        for (int i = 0; i < stringLength; i++)
        {
            tempIndex++;
            if (story[i] == ' ' && tempIndex > maxCharPerLine)
            {
                lineCount++;
                tempIndex = tempIndex - maxCharPerLine;
            }
        }
        if (tempIndex > 0)
        {
            lineCount++;
        }

        printf("%f\n", (float)lineCount / maxLinePerPage);
    }
}
