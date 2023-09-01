#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char quote[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    for (int i = 0; i < n; i++)
    {
        printf("%c", quote[i]);
    }
    printf("\n");
}