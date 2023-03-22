#include <stdio.h>

    int main()
    {
        int a[3] = {1,3,4};
        int *p;
        p = a;

        int i;
        for(i = 0; i < 3; i++)
        {
            printf("%d", p[i]);
        }


    }

