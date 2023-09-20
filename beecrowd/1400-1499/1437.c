#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    while (1)
    {

        scanf("%d", &testCase);
        int currentState = 0;
        if (testCase == 0)
        {
            break;
        }

        char command[testCase];
        scanf("%s", command);
        for (int i = 0; i < strlen(command); i++)
        {
            if (command[i] == 'E')
            {
                currentState--;
            }
            if (command[i] == 'D')
            {
                currentState++;
            }
        }

        currentState = currentState % 4;
        // printf("%d\n",currentState);

        if (currentState == 0)
        {
            printf("N");
        }
        else if (currentState == 1 || currentState == -3)
        {
            printf("L");
        }
        else if (currentState == 2 || currentState == -2)
        {
            printf("S");
        }
        else
        {
            printf("O");
        }
        printf("\n");
    }
}
