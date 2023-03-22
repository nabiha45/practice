#include <stdio.h>

int main()
{
    int n, m, i;

    scanf("%d %d", &n, &m);

    for (i = 1; i <= m; i++)
    {
        if (n % 10 != 0)
        {
            n = n -1;
        }

        else
        {
            n = n / 10;
        }
    }

    printf("%d", n);

    return 0;
}
