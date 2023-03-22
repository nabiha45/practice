#include <stdio.h>

int main()
{
    int i, n, j;

    while (scanf("%d", &n) == 1)
    {

    int arr1[n];
    int arr2[n];



    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 1; i <= n-1; i++)
    {
        if (arr1[i+1] >= arr1[i])
        {

        arr2[i] = arr1[i+1] - arr1[i];
        }
        else
        {
        arr2[i] = arr1[i] - arr1[i+1];
        }
    }
    int temp;

   for (int i = 1; i <= n-1; i++)
   {
       for (int j = i+1; j <= n-1; j++)
       {
           if (arr2[i]>arr2[j])
           {

       temp = arr2[i];
       arr2[i] = arr2[j];
       arr2[j] = temp;
       }
       }
   }



   int c = 0;
   for (i = 1; i <= n-2; i++)
   {
        if (arr2[i+1] - arr2[i] != 1)
        {
            c++;
        }
   }

   if (c == 0)
   {
       printf("Jolly\n");
   }
   else
   {
       printf("Not Jolly\n");
   }
    }
return 0;
}
