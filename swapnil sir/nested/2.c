#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if(j % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}
