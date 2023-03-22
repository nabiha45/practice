#include <stdio.h>

int main()
{
    int i, n, k, j;
    int arr[1000];


    int t;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d", &n, &k);

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
        int c;
        c = 0;

        for (i = 1; i <= max; i++)
        {
            if (f[i] >= k)
            {
                c++;
            }
        }

        for (i = 1; i <= n; i++)
        {
            if (arr[i] == i && f[i] >= k)
            {
                c--;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
