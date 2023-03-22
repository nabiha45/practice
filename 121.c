#include <stdio.h>

int main()
{
    int i, j, k;
    int arr[100];
    int arr2[100];
    int temp;
    int n;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    i = n-1;
    j = 0;
    for (j = 0; j < n; j++)
    {
        arr2[j] = arr[i];
        i--;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;

}
