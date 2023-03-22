#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int q;

    scanf("%d", &q);

    int d1, d2;

    while (q--)
    {
        scanf("%d %d", &d1, &d2);

        for (i = 0; i < n; i++)
        {
            if (d1 == i)
            {
                arr[i] += d2;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
