#include <stdio.h>

int main()
{
    int ara[10] = {10, 20, 30, 40, 50, 60, 7, 8, 9, 100};

    int i;

    for(i = 0; i < 10; i++)
    {
        printf("%dth element is %d\n", i+1, ara[i]);

    }

    return 0;
}
