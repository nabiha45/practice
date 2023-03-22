#include <stdio.h>

int main()
{
    int p, q, n, sum;

    sum = 0;

    scanf("%d %d", &p, &q);

    for(n = p; n <= q; n++)
    {
        sum += n;

        printf("%d", n);

        if (n < q)
        {
            printf("+");
        }

        else
        {
            printf("=");
        }
    }

    printf("%d", sum);

    return 0;
}
