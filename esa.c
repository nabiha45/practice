#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
         if (i == n || i == 1)
         {
             printf("* ");
         }
         else if (j == 1 || j == n)
         {
             printf("* ");
         }
         else
         {
             printf("  ");
         }

        }
        printf("\n");
    }

    return 0;
}