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
        d = 0;

        while (n--) // 3 2
        {
            scanf("%d", &a);



          if (a < 0)
          {
              c++;
          }
          else if (a == 0)
          {
              d++;
          }
        }

          if (c % 2 == 0 || d != 0)
          {
              printf("0\n");
          }

          else
          {
              printf("1\n");
          }


    }



    return 0;
}
