#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    int i, j, max;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int c;
    c = 0;

    while (arr[0] < max)
    {
        c++;
        max--;
    }
    printf("%d", c);
    return 0;
}
