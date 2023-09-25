#include <stdio.h>

int main()
{
    int testCase, i;
    double term1, term2, final, attendence, ct1, ct2, ct3;
    scanf("%d", &testCase);

    for (i = 1; i <= testCase; i++)

    {
        scanf("%lf %lf %lf %lf %lf %lf %lf", &term1, &term2, &final, &attendence, &ct1, &ct2, &ct3);

        double testAverage;
        if (ct1 <= ct2 && ct1 <= ct3)
        {
            testAverage = (ct2 + ct3) / 2.0;
        }
        else if (ct2 <= ct1 && ct2 <= ct3)
        {
            testAverage = (ct1 + ct3) / 2.0;
        }
        else
        {
            testAverage = (ct1 + ct2) / 2.0;
        }

        double totalNumber = testAverage + term1 + term2 + final + attendence;

        printf("Case %d: ", i);
        if (totalNumber >= 90)
        {
            printf("A");
        }
        else if (totalNumber >= 80)
        {
            printf("B");
        }
        else if (totalNumber >= 70)
        {
            printf("C");
        }
        else if (totalNumber >= 60)
        {
            printf("D");
        }
        else
        {
            printf("F");
        }
        printf("\n");
    }

    return 0;
}