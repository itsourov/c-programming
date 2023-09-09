// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int testCase, leftArrowCount, rightArrowCount;
//     char raw[1000];
//     scanf("%d", &testCase);
//     for (int index = 0; index < testCase; index++)
//     {
//         rightArrowCount = 0;
//         leftArrowCount = 0;
//         // getchar();
//         fgets(raw, 1000, stdin);
//         for (int i = 0; i < 1000; i++)
//         {
//             if (raw[i] == '<')
//             {
//                 leftArrowCount++;
//             }
//             else if (raw[i] == '>' & rightArrowCount < leftArrowCount)
//             {
//                 rightArrowCount++;
//             }
//         }
//         printf("%d\n", rightArrowCount);
//     }
// }