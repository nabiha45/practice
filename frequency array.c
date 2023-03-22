#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k, i;
        int arr[1000];
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int max = arr[1];

        for (i = 2; i <= n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        int f[max+1];

        for (i = 1; i <= max; i++)
        {
            f[i] = 0;
        }
        for (i = 1; i <= n; i++)
        {
            f[arr[i]] += 1;
        }
        for (i = 1; i <= max; i++)
        {
            printf("%d is %d times\n", i, f[i]);
        }
    }
    return 0;
}
