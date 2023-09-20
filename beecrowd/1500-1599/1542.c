#include <stdio.h>

int main()
{
    int a, b, c, x;

    while (1)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
        scanf("%d %d", &b, &c);

        x = ((double)(b * c) / (c - a)) * a;

        /*  //debug
          if(x==141){
              printf("%d %d %d\n",a,b,c);
          }
          */

        if (x > 1)
        {
            printf("%d paginas\n", x);
        }
        else
        {
            printf("%d pagina\n", x);
        }
    }
}

// 3*x = 5*(x-16)
// 3x = 5x-80
// 2x=80
// x=20
