#include <stdio.h>

int main()
{
    int i, j;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if(i*j == 12)
            {


            printf("%d x %d = %d\n", i, j, i*j);
            }
        }
    }
    return 0;
}
