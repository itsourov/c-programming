#include <stdio.h>

int main()
{

    int testCase, numberOfFeedback, feedbackCategory;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &numberOfFeedback);
        for (int j = 0; j < numberOfFeedback; j++)
        {
            scanf("%d", &feedbackCategory);
            if (feedbackCategory == 1)
            {
                printf("Rolien\n");
            }
            else if (feedbackCategory == 2)
            {
                printf("Naej\n");
            }
            else if (feedbackCategory == 3)
            {
                printf("Elehcim\n");
            }
            else if (feedbackCategory == 4)
            {
                printf("Odranoel\n");
            }
        }
    }
}
