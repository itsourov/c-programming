#include <stdio.h>
#include <string.h>
int main()
{
    char equation[200];
    scanf("%s", equation);

    int len = strlen(equation);

    int hasPrintedSomthing = 0;
    for (int i = 0; i < len; i++)
    {
        if (equation[i] == '1')
        {
            if (!hasPrintedSomthing)
            {
                printf("1");
            }
            else
            {
                printf("+1");
            }
            hasPrintedSomthing = 1;
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (equation[i] == '2')
        {
            if (!hasPrintedSomthing)
            {
                printf("2");
            }
            else
            {
                printf("+2");
            }
            hasPrintedSomthing = 1;
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (equation[i] == '3')
        {
            if (!hasPrintedSomthing)
            {
                printf("3");
            }
            else
            {
                printf("+3");
            }
            hasPrintedSomthing = 1;
        }
    }

    printf("\n");
}