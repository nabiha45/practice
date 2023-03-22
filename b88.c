#include <stdio.h>

int main()
{
    int t, n, k;


    int arr1[1000]; int arr2[1000];

    int i, j;

    scanf("%d", &t);

    while(t--)
    {
        int c = 0;
        scanf("%d %d", &n, &k);

        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
        for (i = 0; i < n; i++)
        {
           int count = 1;
            if (arr1[i] != -1)
            {
                for (j = i+1; j < n; j++)
                {
                    if  (arr1[j] != (j+1))
                    {

                    if (arr1[i] == arr1[j])
                    {
                        count++;
                        arr1[j] = -1;
                    }


                }
                }
                arr2[i] = count;


            }


            else
            {
                arr2[i] = 0;
            }

        }

        for (i = 1; i <= n; i++)
        {
            if (arr1[i-1] != i)

             {

            if ((arr2[i-1] == k || arr2[i-1] > k))
            {
                c++;
            }
             }


        }
        printf("%d\n", c);


    }
    return 0;
}
