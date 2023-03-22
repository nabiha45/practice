#include <stdio.h>

int main()

{
    long int i, n, x, a, c;


    c = 0;

    scanf("%ld %ld", &n, &x);

    for (i = 1; i <= n; i++)
    {

        a = x/i;
        if (x % i == 0)
        {

        if (a <= n)
        {
            c++;
        }
    }
    }

    printf("%ld", c);

    return 0;

}
