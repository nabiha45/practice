#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);


    int temp;
    int sum = 0;

    int arr[n];


    int i, j;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


   for (i = 0; i < n; i++)
   {
       for (j = i+1; j <n; j++)
       {
           if (arr[i] > arr[j])
           {
               temp = arr[j];
               arr[j] = arr[i];
               arr[i] = temp;
           }
       }
   }

   for (i = 0; i < m; i++)
   {
       if (arr[i] < 0)
       {
       sum += arr[i];
       }
   }
   printf("%d", -1*sum);

    return 0;
}
