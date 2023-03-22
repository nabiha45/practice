#include <stdio.h>

int main()
{
    int n, a, b;

    scanf("%d", &n);

    b = 1;

    for(a = 1; a <= n;)
    {
        for(b = 1; b <= n; b++)
        {
            if(b % 2 == 0)
            {
                printf("0");
            }

            else
            {
                printf("1");
            }


        }
        a++;
        printf("\n");
    }

    return 0;
}
