#include <stdio.h>

int main()
{
    int n, b, c;

    scanf("%d", &n);

    c = 0;

    int x = n;

    for(b = n; b != 0; b /= 10) // 1
    {
        c++; // c = 6


        if (c % 3 == 0)
        {
            printf(",%d", n%1000);

            x = x %1000;
        }

        else if (c % 3 == 1)
        {
            continue;
        }

    }


    return 0;
}
