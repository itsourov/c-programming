#include <stdio.h>
#include <string.h>

int main()
{
    int testCase, index;
    char message[50], secreatMessage[50];
    scanf("%d", &testCase);

    index = 0;
    for (int i = 0; i < testCase; i++)
    {
        fgets(message, 50, stdin);
        for (int j = 0; message[j] < 50; j++)
        {
            if (message[j] == '.')
            {
                secreatMessage[index] = message[j + 1];
                index++;
            }
        }

        printf("%s\n", secreatMessage);
    }
}