#include <stdio.h>
#include <string.h>

int main()
{
    int n, l, c;
    char word[71]; // Assuming a maximum word size of 70 characters

    while (scanf("%d %d %d", &n, &l, &c) != EOF)
    {
        int pages = 1;
        int lines = 1;
        int characters = 0;

        for (int i = 0; i < n; ++i)
        {
            scanf("%s", word);
            int word_length = strlen(word);

            if ((characters + word_length + 1) <= c)
            {
                characters += word_length + 1;
            }
            else
            {
                ++lines;
                if (lines > l)
                {
                    ++pages;
                    lines = 1;
                }
                characters = word_length;
            }
        }

        printf("%d\n", pages);
    }

    return 0;
}
