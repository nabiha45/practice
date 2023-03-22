#include <stdio.h>

int main()
{
    long long int n, i, j, x;
    scanf("%lld", &n);

    long long int a[n+1], b[n+1];

    for (i = 1, j= n; i <= n, j >= 1; i++, j--)
    {
        scanf("%lld", &x);

        a[x] = i;
        b[x] = j;

    }
    long long int sum1, sum2, m;
    sum1 = 0;
    sum2 = 0;
    scanf("%lld",  &m);
    long long int c[m+1];
    for (i = 1; i <= m; i++)
    {
        scanf("%lld", &c[i]);
    }
    for (i = 1; i <= m; i++)
    {
        sum1+= a[c[i]];
        sum2+= b[c[i]];
    }

    printf("%lld %lld", sum1, sum2);
    return 0;

}
