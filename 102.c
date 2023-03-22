#include <stdio.h>

int main()
{
    int n, j, k;
    int d = 0;
    int sum = 0;

    scanf("%d", &n);

    int p, q;

    scanf("%d", &p);

    int x[p];
    for (int i = 1; i <= p; i++)
    {
        scanf("%d", &x[i]);
    }
    scanf("%d", &q);
    int y[q];
    for (int i = 1; i <= q; i++)
    {
        scanf("%d", &y[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        for (j = 1, k = 1; j <= p, k <= q; j++, k++)
        {
            if (x[j] ==i || y[k] == i)
            {
                d += i;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    if (d == sum)
    {
        printf("I become the guy.");
    }
    else
    {
        printf ("Oh, my keyboard!");
    }
    printf("%d", d);
    return 0;
}
