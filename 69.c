#include <stdio.h>

int main()
{
    int i, j, n, c;
    c = 0;
    int min;

    int arr1[1000];
    int arr2[1000];

    arr1[1] = 1;
    arr2[1] = 1;

    scanf("%d", &n);
    min = 0;
    for (i = 2; i <= n; i++)
    {
        scanf("%d", &arr1[i]);
    }

        for (i = 2; i <= n; i++) // i = 3
        {

        for (j = 2; j <= n; j++)// j = 2
        {

           if (arr1[j] == min)
           {
               min++;
               arr2[i] = j;
               break;

           }
        }
        }
        for (i = 1; i <= n; i++)
        {
            printf("%d ", arr2[i]);
        }

        return 0;
    }

