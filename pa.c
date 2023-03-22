#include <stdio.h>

int main()
{
    int i, j, k, n;

    k = 0;

    scanf("%d", &n);

    for (i = n; i != 0; i /= 10) // i = 16345
    {
        j = i % 10;
        k = k * 10 + j;

        printf("%d", k);


    }
}
