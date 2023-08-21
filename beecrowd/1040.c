#include <stdio.h>
int main()
{
    double n1, n2, n3, n4;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    double weightAverage = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / (2 + 3 + 4 + 1);
    printf("Media: %.1lf\n", weightAverage);

    if (weightAverage >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (weightAverage >= 5.0)
    {
        printf("Aluno em exame.\n");
        double oneMoreScore;
        scanf("%lf", &oneMoreScore);
        printf("Nota do exame: %.1lf\n", oneMoreScore);

        double average;
        average = (weightAverage + oneMoreScore) / 2;

        if (average >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", average);
    }

    else
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}