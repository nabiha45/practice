#include <stdio.h>


    int main()
    {
        int n, i, c;

        scanf("%d", &n);

        c = 0;

        for (i = n; i != 0; i /=  10)
        {
            c++;
        }

        printf("%d", c);

        return 0;

    }

