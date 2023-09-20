#include <stdio.h>
int main()
{
    int n, m;
    char input[7];

    scanf("%d %d", &n, &m);
    while (m--)
    {
        scanf("%s", input);
        if (input[0] == 'f')
        {
            n++;
        }
        if (input[0] == 'c')
        {
            n--;
        }
    }
    printf("%d\n", n);
}