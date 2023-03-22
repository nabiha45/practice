#include <stdio.h>

int main()
{
    int t, n;
    int i;
    long long int p;

    int arr[100];

    scanf("%d", &t);

    while (t--)
    {
        p = 1;
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            arr[i] = i;
        }

        for (i = 1; i <= n; i++)
        {
            p *= arr[i];
        }

        printf("%lld\n", p);
    }
    return 0;
}
