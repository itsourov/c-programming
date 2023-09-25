#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x = 0;
    char input[5];
    while (n--)
    {
        scanf("%s", input);
        if ((input[0] == '+' && input[1] == '+') || (input[1] == '+' && input[2] == '+'))
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    printf("%d\n", x);
}