#include <stdio.h>
#include <string.h>

int main()
{
    int C;
    scanf("%d", &C);

    // Iterate through each test case
    for (int i = 0; i < C; i++)
    {
        char message[101]; // Assuming the maximum message length is 100
        scanf("%s", message);

        int len = strlen(message);

        for (int i = len - 1; i >= 0; i--)
        {
            if (message[i] >= 'a' && message[i] <= 'z')
            {
                printf("%c", message[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
