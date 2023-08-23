#include <stdio.h>
int main(void)
{

    int n;
    scanf("%d", &n);

    int in = 0, out = 0;
    int temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);

        if (temp >= 10 && temp <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
}