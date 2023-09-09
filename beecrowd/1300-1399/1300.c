#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {

        printf("%c\n", n % 6 == 0 ? 'Y' : 'N');
    }
}