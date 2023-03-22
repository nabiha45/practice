#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for (i = n; i != 0; i--)
    {
        if (i % 2 == 0)
        {
            printf("1");
        }

        else
        {
            printf("0");
        }
    }

    return 0;
}
