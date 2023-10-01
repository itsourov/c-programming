#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    int block = 1;
    int count = 1;
    while (block < n)
    {
        count++;
        block += block + count;
    }

    printf("%d\n", count);
}