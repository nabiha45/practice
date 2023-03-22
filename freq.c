#include <stdio.h>

int main()
{
    int n, p, q, i, j, c;
    c = 0;

    scanf("%d", &n);
    scanf("%d", &p);

    int x, f[n + 1];

    for (i = 1; i <= n; i++)
    {
        f[i] = 0;
    }
    for (i = 1; i <= p; i++)
    {
        scanf("%d", &x);
        f[x]+=1;
    }
    scanf("%d", &q);
    int y;
    for (i = 1; i <= q; i++)
    {
        scanf("%d", &y);
        f[y]+=1;
    }

    // for (i = 1, j = 1; i <= p, j <= q; i++, j++)
    // {
    //     f[x[i]] += 1;
    //     f[y[i]] += 1;
    // }
    for (i = 1; i <= n; i++)
    {
       if (f[i] >= 1)
       {
           c++;
       }
    }

    if (c == n)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }
    return 0;
}
