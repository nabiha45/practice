#include <stdio.h>

int main()
{
    int i, j, n;
    int sum = 0;

    scanf ("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (i % 2 != 0 && i != 0)
        {
            sum = arr[i] + sum;
        }
    }

    if (sum % 2 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
