#include <stdio.h>

int main()
{
    int t, c, a;

    scanf("%d", &t);
    while (t--)
    {
       int n;
       scanf("%d", &n);
       int arr[n+1];
       int i, j;

       for (i = 1; i <= n; i++)
       {
           scanf("%d", &arr[i]);
       }
       int max = arr[1];

    for (i = 1; i <= n; i++)
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
        f[arr[i]]+= 1;
    }

    for (j = 1; j <= max; j++)
    {
        if (f[j] == 1)
        {
           a = j;
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (arr[i] == a)
        {
            printf("%d\n", i);
            break;
        }
    }
    }

    return 0;
}
