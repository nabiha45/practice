#include <stdio.h>

int main()
{
    long long int i, n, sum, j;

    sum = 0;

    scanf("%lld", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            j = (-1)*i;
        }

        else
        {
            j = i;
        }

        sum += j;
    }

    printf("%lld", sum);
}
