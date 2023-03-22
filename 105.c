#include <stdio.h>

int main()
{
    int n, max, min, j, temp, x, y, ans;

    ans = 0;

    scanf("%d", &n);

    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[1];
    min = arr[1];

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
            x = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];

            y = i;
        }
    }

   if (x > y)
   {
       ans = x+n-y-2;
   }
   else
   {
       ans = x+n-y-1;
   }
   printf("%d\n", ans);


        return 0;
    }
