#include <stdio.h>
#include <string.h>

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);

    char que[100], temp;
    getchar();
    scanf("%s", que);
    int len = strlen(que);

    while (t--)
    {
        for (int i = 0; i < len - 1; i++)
        {
            if (que[i] == 'B' && que[i + 1] == 'G')
            {
                temp = que[i];
                que[i] = que[i + 1];
                que[i + 1] = temp;
                i++;
            }
        }
    }
    printf("%s\n", que);
}