#include <stdio.h>

int main()
{
    int n, i, t, x;
    scanf("%d", &t);

    while (t--)
    {
    scanf("%d", &n);
    int arr[2*n];
    int j;

    for (i = 0; i < 2*n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 2*n; i++)
    {
        x = arr[i];
        for (j = 0; j < 2*n; j++)
        {
            if (x == arr[j] && j != i)
            {
                arr[i] = 0;

            }

        }
    }
    for (i = 0; i < 2*n; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    }
    return 0;
}
