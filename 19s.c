#include <stdio.h>

int main()
{
    int n, c, i;

    scanf("%d", &n);

    c = 0;

    for (i = n; i != 0; i/= 10)
    {
        if (i % 10 == 0)
        {
            c++;
        }
    }

    printf("%d", c);
}
