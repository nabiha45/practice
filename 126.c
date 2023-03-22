#include <stdio.h>

int main()
{
    int n, i, j,  c;
    c = 0;
    scanf("%d", &n);

    int arr[n+1];
    int min;

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[1];
    for (i = 1; i <= n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            c = i;
        }
    }
    if (c == 0)
    {
        printf("%d 1", min);
    }
    else
    {
    printf("%d %d", min, c);
    }
    return 0;


}
