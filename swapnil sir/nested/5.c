#include <stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {   k =1;
        for(j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k+=2;
        }
        printf("\n");
    }
    return 0;
}
