#include <stdio.h>

int main()
{
    int n, m, i, j, prime, k;

    scanf("%d %d", &n, &m);

    for (i = n+1; i <= m; i++)
    {
        prime = 1;

        for (j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
    if (prime == 1)
    {
        k = i;
        break;
    }
    }
    if (k == m)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
