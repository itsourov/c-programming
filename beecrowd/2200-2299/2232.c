#include <stdio.h>
#include <math.h>
int main()
{
    int testCase, input;
    long long int result;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d", &input);
        result = 0;
        for (int i = 0; i < input; i++)
        {
            result += pow(2, i);
        }

        printf("%lld\n", result);
    }
}