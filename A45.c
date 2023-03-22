#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);



    while (t--)
    {
        long long int sum = 0;
        int n, x, y;
        scanf("%d", &n);
        long long int arr[n+1];
        int i, j;
        for (i = 1; i <= n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        for (i = 1, j = 2; j <= n; j++)
        {
            arr[1] = arr[1]*arr[j];
            arr[j] = 1;
        }
        for (i = 1; i <= n; i++)
        {
         sum+= arr[i];
        }
        printf("%lld\n", sum*2022);
    }
    return 0;

}
