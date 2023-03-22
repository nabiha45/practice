#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int i, j;
    int temp = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {

        if (arr[i] > arr[j])
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
        }
    }
    for (i = 0; i < n; i++)
    {
    printf("%d ", arr[i]);
    }
    return 0;
}
