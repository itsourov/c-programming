#include <stdio.h>
int main()
{
    int n[1000];
    int input;
    scanf("%d", &input);
    for (int i = 0; i < 1000; i += input)
    {

        for (int j = 0; j < input && (i + j) < 1000; j++)
        {
            n[i + j] = j;
            printf("N[%d] = %d\n", i + j, n[i + j]);
        }
    }
}
