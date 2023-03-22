#include <stdio.h>

int main()

{
        int n;
        scanf("%d", &n);

        int arr[n];

        int i, j;
        int c = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (i = 0; i < n; i++)
        {
            if (i == 0 )
            {
                if (arr[0] > arr[i+1] && arr[0] > arr[n-1])
                {
                    c++;
                }
            }
            if (i == n)
            {
                if (arr[n] > arr[n-1] && arr[n] > arr[0] )

                {
                    c++;
                }
            }
            else
            {
                if (arr[i] > arr[i+1] && arr[i] > arr[i-1] && (i != n || i != 0))
                {
                    c++; // c
                }
            }
        }
        printf("%d", c);
        return 0;
}
