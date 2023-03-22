#include <stdio.h>
int main()
{
    int a, b, i, j, k, n, max, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    max = arr[1];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i]==max)
        {
            x=i;
        }
    }

    if (max < arr[0])
    {
        printf("0");
    }
    else
    {
        while (arr[0] <= max)
        {

            arr[x]--;
            arr[0]++;
            count++;
            max = arr[1];
            for (i = 1; i < n; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                }
                if (arr[i]==max)
                {
                    x=i;
                }
            }


        }
        printf("%d", count);
    }
}
