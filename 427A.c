#include <stdio.h>

int main()
{
    int n, x, c;
    c = 0;
    int sum = 0;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &x);

       if (x >= 1 && x <= 10)
       {
           sum+= x;
       }
       else if (x == -1)
       {
           if (sum >= 1)
           {
               sum+= x;
           }
           else
           {
               c++;
           }
       }


    }

    printf("%d", c);
   return 0;
}
