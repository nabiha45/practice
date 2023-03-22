#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max;
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int d = 0;
    for (i = 0; i < n; i++)
    {
        d += max - arr[i];
    }

    printf("%d", d);
}
