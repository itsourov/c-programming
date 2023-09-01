#include <stdio.h>
int main(void)
{
    char word1[15], word2[15], word3[15];
    scanf("%s %s %s", word1, word2, word3);

    if (word1[0] == 'v' && word2[0] == 'a' && word3[0] == 'c')
    {
        printf("aguia\n");
    }
    else if (word1[0] == 'v' && word2[0] == 'a' && word3[0] == 'o')
    {
        printf("pomba\n");
    }
    else if (word1[0] == 'v' && word2[0] == 'm' && word3[0] == 'o')
    {
        printf("homem\n");
    }
    else if (word1[0] == 'v' && word2[0] == 'm' && word3[0] == 'h')
    {
        printf("vaca\n");
    }
    else if (word1[0] == 'i' && word2[0] == 'i' && word3[2] == 'm')
    {
        printf("pulga\n");
    }
    else if (word1[0] == 'i' && word2[0] == 'i' && word3[2] == 'r')
    {
        printf("lagarta\n");
    }
    else if (word1[0] == 'i' && word2[0] == 'a' && word3[0] == 'h')
    {
        printf("sanguessuga\n");
    }
    else if (word1[0] == 'i' && word2[0] == 'a' && word3[0] == 'o')
    {
        printf("minhoca\n");
    }
}