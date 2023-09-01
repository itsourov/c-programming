#include <stdio.h>
int main()
{
    int testCase, force;
    char name[10];
    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        scanf("%s %d", name, &force);

        if (name[0] == 'T' && name[1] == 'h')
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
}