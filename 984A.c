#include <stdio.h>

int main()
{
    int i, j, temp;

    int n, a;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {

    for (j = i+1; j < n; j++)
    {
        if (arr[i] > arr[j])
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }

    }
    }

    if (n % 2 == 0)
    {
        a = n / 2;
        printf("%d", arr[a-1]);
    }
    else
    {
        a = (n+1)/2;
        printf("%d", arr[a-1]);
    }
    return 0;
}
