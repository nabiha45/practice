#include <stdio.h>

int main()
{
    int p,n,i, temp;
    scanf("%d %d", &n, &p);
    int arr[100];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n;i++)
    {
        if (i >= p)
        {
            temp = arr[i+1];
            arr[i] = temp;
        }
    }
    n--;
    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
