#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m, i, j;
    cin >> n >> m;
    int arr[100][100];
    int k = 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            arr[i][j] = k;
            k++;
        }
    }
     int a = 0;
     int M = 0;
      j = 0;

     for (i = 0; i < n; i++)
     {
         if(arr[i][j] >= 1 && arr[i][j] <= 10000 && i % 2 == 0)
         {
             a++;
             j++;
             M = 0;

         }
         else if (arr[i][j] >= 1 && arr[i][j] <= 10000 && i % 2 == 1)
         {
             M++;
             j++;
             a = 0;

         }
     }
     printf("%d %d", a, M);
     if (a > M)
     {
         printf("Akshat");
     }
     else if (M > a)
     {
         printf("Malvika");
     }
}
