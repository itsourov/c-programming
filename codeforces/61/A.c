#include <stdio.h>
#include <string.h>

int main()
{
    char in1[110], in2[110];
    scanf("%s %s", in1, in2);

    int len = strlen(in1);

    for (int i = 0; i < len; i++)
    {
        if (in1[i] == in2[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    printf("\n");
}