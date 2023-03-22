#include <stdio.h>

int main()
{
    int n, i, t1, t2, c, m, k;
    m = 0;
    t2 = 0;

    scanf("%d %d", &n, &k);

    for (i = 1; i <= n; i++)
    {
        c = i;

        t2 += c*5;
        t1 = t2+k;

        if (t1 <= 240)
        {
            m++;
        }

    }
    printf("%d", m);
    return 0;
}
