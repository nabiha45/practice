#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[100];

    int i, j;

    int x;
    scanf("%d", &x);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int y;
    scanf("%d", &y);
    scanf("%d", &x);



    for (i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
