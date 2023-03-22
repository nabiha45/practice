#include <stdio.h>

int main()
{
    int n, x, i, temp;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (i >= x)
        {
         temp = arr[i+1];
         arr[i] = temp;

        }
    }
    n--;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
