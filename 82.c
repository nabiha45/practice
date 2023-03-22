#include <stdio.h>

int main()
{
    int n, p, q, i;
    int c = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d %d", &p, &q);

        if (p < q && q-p >= 2)
        {
            c++;
        }

    }
    printf("%d", c);
    return 0;
}
