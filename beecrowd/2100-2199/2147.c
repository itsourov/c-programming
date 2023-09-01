#include <stdio.h>
#include <string.h>
int main()
{
    int testCase, stringLength;
    char text[10000];
    scanf("%d ", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        scanf("%s", text);
        stringLength = strlen(text);
        printf("%.2lf\n", stringLength * .01);
    }
}