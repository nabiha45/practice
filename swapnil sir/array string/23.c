#include <stdio.h>

int main()
{
    int m,n, i, j;
    scanf("%d %d", &m, &n);
    int a[m][n];
     for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int k = m-1;
     for (i = 0; i < m; i++)
    {

        for (j = 0; j < 0; j++)
        {
          if(j == k) printf("%d ", a[i][j]);
          k--;
        }
    }
}


