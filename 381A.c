#include <stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    int arr[n+1];

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int s = 0, d = 0;
    k = 1;
    int turn = 1;
     j = n;
    for (i = 1; i <= n; i++)
    {


        if (arr[k] <= arr[j] && turn % 2 != 0)
        {
            s += arr[j];
            j--;
        }
        else if (arr[k] <= arr[j] && turn % 2 == 0)
        {
            d += arr[j];
            j--;
        }
        else if (arr[k] >= arr[j] && turn % 2 != 0)
        {
            s+= arr[k];
            k++;
        }
        else if (arr[k] >= arr[j] && turn % 2 == 0)
        {
            d += arr[k];
            k++;
        }
        turn++;

    }
    printf("%d %d", s, d);
    return 0;
}
