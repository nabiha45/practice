#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n+1];
    int i, min;
    for (i = 1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[1];
    for (i = 1; i <= n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    int x, y;
    int count = 1;

    for (i = 1; i <= n; i++)
    {
        if (arr[i] == min)
        {
            count++;
        }

    }
    int a[count+1];
    int c = 1;
    for (i = 1; i <= n; i++)
    {
        if (arr[i] == min)
        {
            a[c] = i;
            c++;
        }
    }
    int diff[count-1];
    for (i = 1; i <= count; i++)
    {
        diff[i] = a[i+1] - a[i];


    }

   int min2 = diff[1];
   for (i = 1; i <= count-2; i++)
   {
       if (diff[i] < min2)
       {
           min2 = diff[i];
       }
   }
   printf("%d", min2);
   return 0;

}
