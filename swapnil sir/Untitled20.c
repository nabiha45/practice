#include <stdio.h>

int main()
{
    int n;
    int i, j;
    scanf("%d", &n);
    int t = 0;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n-i; j++)
        {
            printf("  ");
        }
        for(j = 1; j <= i; j++)
        {
            if(t % 2 == 0)
            {
                printf("A ");
                t++;
            }
            else
            {
                printf("B ");
                t++;
            }
        }
        printf("\n");
    }

}
