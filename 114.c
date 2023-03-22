#include <stdio.h>

int main()
{
    int i, j, row, col, k;

    int n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {   k =1;
        for (j = 1; j <= 2*n-1; j++)
        {

            if (i % 2 == 1)
            {
            if (j % 2 == 1 && j == i)
            {
                printf("%d", k);
                k++;
            }
            else
            {
                printf(" ");
            }
            }
            else if (i % 2 == 0)
            {
               if (j == i && j % 2 == 0)
               {
                   printf("%d", k);
                   k++;
               }
               else
               {
                   printf(" ");
               }
            }


        }
        printf("\n");
    }
    return 0;
}
