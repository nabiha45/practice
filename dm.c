#include <stdio.h>

int main()
{
    int n, i, c;

    c = 0;

    scanf("%d", &n);

    if (n == 1 || n == 2 || n == 3 || n == 4 || n == 5)
    {
        printf("1");
    }

    else if (n % 5 == 0)
    {
        printf("%d", n/5);
    }


    else if (n < 10)
    {
        printf("%d", n-5);
    }

    else if (n > 10)
     {

        for (i = n; i > 0; i= i - 5 )
    {
        c++;
    }

    printf("%d", c);

     }

    return 0;
}
