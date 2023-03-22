#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    i = 1;

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("1");
        }

        else if (i % 2 != 0)
        {
            printf("0");
        }
    }

    return 0;
}
