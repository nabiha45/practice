#include <stdio.h>

int main()
{
    int p, q, sum;

    sum = 0;

    scanf("%d %d", &p, &q);

    while(p <= q)
    {
        sum = sum + p;

        if(p < q) {

        printf("%d+", p);

        }

        else
        {
            printf("%d", p);
        }

        p++;


    }

    printf("=%d", sum);

    return 0;
}
