#include <stdio.h>

int main()
{
    int i, j,n;

    scanf("%d", &n);

    j = n;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            j = n / i;

            printf("%d x %d = %d", i, j, n);
        }
    }

    return 0;
}
