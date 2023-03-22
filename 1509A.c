#include <stdio.h>
#include <ctype.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int a[n];
        int b[n];
        int i, j, d;

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < n; i++)
        {
            for (j = i+1; j < n; j++)
            {
                d = a[i] + a[j] / 2;
                if (d % 2 == 0)
                {
                    b[i] = a[i];
                    b[j] = a[j];

                }
            }
        }
        for (i = 0; i < n; i++)
        {
            printf("%d ", b[i]);
        }
    }
    return 0;
}
