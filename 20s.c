#include <stdio.h>

int main()
{
    int n, i, j, b=0;

    scanf("%d", &n);

    for (i = n; i != 0; i/= 10)
    {
        j = i % 10;
        b = b*10 + j;




    }

    printf("|%d = %d | = 9 x", n, b);

    if (n > b)
    {
        printf("%d", (n-b) / 9);
    }

    else
    {
        printf("%d", (b-n)/ 9);

    }

    return 0;

}



