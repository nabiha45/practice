#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    int arr[n];
    int arr2[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j = 1;

    while (j != n+1)
    {
        for (i = 1; i <= n; i++)
        {
            if (arr[i] == j)
            {
                arr2[j] = i;
                j++;
            }

        }
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}
