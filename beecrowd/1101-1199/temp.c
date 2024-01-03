#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{

    char id_string[8 + 2]; // extra 2 for safty

    // take input
    scanf("%s", id_string);

    int id[8];
    for (int i = 0; i < 8; i++)
    {
        id[i] = id_string[i] - '0';
    }

    // reverse the id
    for (int i = 0; i < 4; i++)
    {
        swap(&id[i], &id[7 - i]);
    }

    // make even id
    int even[4];
    for (int i = 0; i < 4; i++)
    {
        even[i] = id[2 * i];
    }

    // make odd id
    int odd[4];
    for (int i = 0; i < 4; i++)
    {
        odd[i] = id[(2 * i) + 1];
    }

    // sort even in descending order
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            if (even[i] < even[j])
                swap(&even[i], &even[j]);
        }
    }

    // sort odd in ascending order
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            if (odd[i] > odd[j])
                swap(&odd[i], &odd[j]);
        }
    }

    // even 2d id
    int even2d[2][2];
    int index = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            even2d[i][j] = even[index];
            index++;
        }
    }

    // odd 2d id
    int odd2d[2][2];
    int index = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            odd2d[i][j] = odd[index];
            index++;
        }
    }
}
