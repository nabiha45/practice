#include <stdio.h>

int main()
{
    int n = 39;
    int k = 3;
    int i;
    for(i = 0; i <=6; i++)
    {
        int p = 1 << i;
    }
    int p = 0 << k;

    int q = n & p;
    printf("%d", q);
}
