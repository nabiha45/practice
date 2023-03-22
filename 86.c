#include <stdio.h>

int main()
{
    long long int n, i, j, c;
    c = 0;

    scanf("%lld", &n);

    for (i = n; i != 0; i /= 10)
    {
        j = i % 10;

        if (j == 4 || j == 7)
        {
            c++;
        }
    }

    if (c == 4 || c == 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
