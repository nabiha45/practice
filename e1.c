#include <stdio.h>

int main()
{
    int n, a, c, d, t, p;

    p = 1;


    scanf("%d", &t);

    while (t--) // t = 1
    {
        scanf("%d", &n); // n = 3

        c = 0;

        while (n--) // 3 2
        {
            scanf("%d", &a);

          p = p*a;


          if (a < 0)
          {
              c++;
          }
        }

          if (c % 2 == 0 || p == 0)
          {
              printf("0\n");
          }

          else
          {
              printf("%d\n", c%2);
          }


    }



    return 0;
}
