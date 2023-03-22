#include <stdio.h>

int main()
{
    int n, p, q, i, j;

    scanf("%d", &n);
    scanf("%d", &p);

    int x[p];

    for (i = 1; i <= p; i++)
    {
        scanf("%d", &x[i]);
    }
    scanf("%d", &q);
    int y[q];
    for (i = 1; i <= q; i++)
    {
        scanf("%d", &y[i]);
    }


        int f[n+1];

        for (i = 1; i <= n; i++)
        {
            f[i] = 0;
        }
        for (i = 1, j = 1; i <= p, j <= q; i++, j++)
        {
            f[x[i]] += 1;
            f[y[i]] += 1;
        }
   for (i = 1; i <= n; i++)
   {
       printf("%d ", f[i]);
   }
   return 0;

}
