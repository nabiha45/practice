#include <stdio.h>

int main()
{
    int t, n, m, i;
    int arr[10000];

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d", &n, &m);
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }

        while (m--)
        {
            char a;

            scanf ("%c", &a);

            if (a == 'P')
            {
                int y, x;

                scanf("%d %d", &x, &y );
                int temp;
                temp = 0;
                arr[y] = temp;
                temp = arr[x];
                arr[x] = arr[y];
            }

            else if (a == 'S')
            {
                int d;
                scanf("%d", &d);
                for (i = 1; i <= n; i++)
                {
                    arr[i] = arr[i] + d;
                }
            }
            else if (a == 'M')
            {
                int d;
                scanf("%d", &d);
                for (i = 1; i <= n; i++)
                {
                    arr[i] = arr[i]*d;
                }
            }
            else if (a == 'D')
            {
                int k;
                scanf("%d", &k);
                for (i = 1; i <= n; i++)
                {
                    arr[i] = arr[i] / k;
                }
            }
            else if (a == 'R')
            {
                int temp = 0;
                for (i = 1; i <= n; i++)
                {
                    for (int j = i+1; j <= n; j++)
                    {
                        if (arr[i] > arr[j])
                        {
                             temp =arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;

                        }
                    }
                }
            }
        }
        for (i = 1; i <=n; i++)
        {
            printf("%d ", arr[i]);
        }

    }
    return 0;
}
