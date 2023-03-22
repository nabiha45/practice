#include <stdio.h>

int main()
{

    int arr[100];
    int n;

    scanf("%d", &n);


    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0, j = n-1; i < n/2; i++, j--)
    {
        printf("%d %d ", arr[i], arr[j]);
    }
}
