// #include <stdio.h>
// #include <math.h>

// int main()
// {

//     int l, c, r1, r2;
//     while (1)
//     {
//         scanf("%d %d %d %d", &l, &c, &r1, &r2);

//         if (l == 0 && c == 0 && r1 == 0 && r2 == 0)
//         {
//             break;
//         }
//         r1 *= 2;
//         r2 *= 2;

//         if ((r1 + r2 <= l && r1 <= c && r2 <= c) || (r1 + r2 <= c && r1 <= l && r2 <= l) || sqrt(l * l + c * c) >= r1 + r2)

//         {
//             printf("S\n");
//         }
//         else
//         {
//             printf("N\n");
//         }
//     }
// }
