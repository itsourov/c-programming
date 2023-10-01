#include <stdio.h>
int main()
{
    int v, t;
    while (scanf("%d %d", &v, &t) != EOF)
    {
        int d = v * t * 2;

        printf("%d\n", d);
    }
}