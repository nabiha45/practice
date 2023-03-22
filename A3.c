#include <stdio.h>

int main()
{
    int n, i, j, k, c;

    scanf("%d", &n);

    k = 2*n-1;

    for(i = 1; i <= k; i++)
    {

        for (j = 1; j <= k; j++)
        {
           if (j == 1 || j == k)
             {
           printf(" ");
           }
           else
           {
               printf("*");
           }

           if (i % 2 == 0 && j % 2 == 0)
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
