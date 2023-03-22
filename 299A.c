#include <stdio.h>

int main()
{
    int n, c, i;
    c = 0;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min;
    min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % min == 0)
        {
            c++;
        }
    }

    if (c == n)
    {
        printf("%d", min);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
