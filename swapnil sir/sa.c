#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    for(i = 1; i <= n; i++)
    {   int k = 0;
        for(j = 1; j < 2*i; j++)
        {
            printf("%d", j);

        }
        printf("\n");
        for(j = 1; j <= 2*i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
