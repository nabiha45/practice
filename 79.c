#include <stdio.h>

int main()
{
    int t, i, n;

    int arr[10000];

    scanf("%d", &t);

    int temp;

    while (t--)
    {
        int c = -1;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }



        for (i = 0; i < n; i++)
        {
            if (arr[i] != arr[i+1])
            {
                c++;
            }
        }

        printf("%d\n", c);
    }
}
