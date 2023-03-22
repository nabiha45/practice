
#include <stdio.h>

int main()
{
    int n, i, j, temp;
    temp =0;
    int c = 0;
    scanf("%d", &n);

    int arr[n];

    for (i = 1; i <=n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i <=n; i++)
    {
        for (j = i+1; j <= n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (i = 1; i <= n; i+=2)
    {

        while (arr[i] != arr[i+1])
        { if (arr[i] < arr[i+1])
        {

            c++;
            arr[i]++;
        }

        else
        {
            c++;
            arr[i+1]++;
        }
        }
    }

    printf("%d", c);
    return 0;
}
