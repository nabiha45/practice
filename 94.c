#include <stdio.h>

int main()
{
    int t, n, i, k;
    int diff;

    scanf("%d", &t);

    while (t--)
    {
        int c = 0;
        diff = 0;
        int temp = 0;
        scanf("%d %d", &n, &k);
        int arr1[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }

        for (i = 0; i < n; i++)
            {
                for (int j = i+1; j < n; j++)
                {
                    if (arr1[i] > arr1[j])
                    {
                        temp = arr1[i];

                        arr1[i] = arr1[j];
                        arr1[j] = temp;
                    }
                }
            }

        for (i = 0; i < n-1; i++)
        {

            diff = arr1[i+1] - arr1[i];
            if (diff <= k)
            {
                c++;
            }
        }


            if (c == n-1)
            {
                for (i = 0; i < n; i++)
                {
                    if (i == n-1)
                    {
                        printf("%d", arr1[i]);
                    }
                    else
                    {
                    printf("%d ", arr1[i]);
                    }
                }
                printf("\n");
            }
            else
            {
                printf("No Solution\n");
            }

    }
    return 0;
}
