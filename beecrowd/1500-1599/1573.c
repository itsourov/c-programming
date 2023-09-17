#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    long long int pod;
    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
        pod = a * b * c;
        printf("%d\n", (int)cbrt((double)pod));
    }
}