#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            printf("*****\n");
        }
        else
        {
            printf("*   *\n");
        }
    }

    return 0;
}
