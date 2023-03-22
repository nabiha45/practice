#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
            if (i == 1 || i == n)
            {
                printf("1 0 0 0");

            }
            else
            {
                printf("1 0   0");

            }

        printf("\n");
    }

    return 0;
}
