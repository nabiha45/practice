#include <stdio.h>

int main()
{
    int a, b, i, j, k, c;
    c = 0;
    k =0;

    scanf("%d %d", &a, &b);

    i = a-b;

    for (j = i; j != 0; j/= 10)
    {
        k = k*10 + (j%10);

        c++;

        if (c == 1)
        {
            k = k+1;
        }
    }

    printf("%d", k);

    return 0;
}
