#include <stdio.h>

int main()
{
    int n, k,i, j;

    scanf("%d", &n);

    k = 2*n - 1;

    for(i = 1; i <= k; i++)
    {
        for (j = 1; j <= k; j++)
        {
           if (i == j || j == (k-i+1))
           {
               printf(" ");
           }

           else
           {
               printf("*");
           }
        }

        printf("\n");
    }

    return 0;
}
