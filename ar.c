#include <stdio.h>

int main()
{
    int n, i, sum2;
    int arr1[100000];
    int arr2[100000];

    int sum1[100000];
    scanf("%d", &n);
    int sum = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + arr1[i];

        sum1[i] = sum;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", sum1[i]);
    }
    return 0;
}
