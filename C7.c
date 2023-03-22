#include <stdio.h>

int main()
{
    int n,i,j, t, m, k;
    int arr1[10000];
    int arr2[10000];

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &arr1[i]);
        }

        scanf("%d", &m);

        while (m--)
        {
            scanf("%d", &j);

            int c;
            int k = 0;

            for (i = 1; i <= j; i++) // j = 3, i = 1
            {

                c = arr1[n];
                arr1[n] = arr1[i];
                arr1[i] = c;

                k++;

                }
            }
            if (k == 4)
            {
                printf("%d ", arr1[2]);
            }
            else
            {
                 printf("%d", arr1[1]);
            }



    }
    return 0;
}
