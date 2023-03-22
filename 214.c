#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d", &n);
    int arr[n+1];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int insert = 5;
    arr[n] = 5;
    for(i = 0; i <= n; i++)
    {
        printf("%d", arr[i]);
    }

}
