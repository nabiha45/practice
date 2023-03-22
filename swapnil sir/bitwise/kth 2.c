#include <stdio.h>

int main()
{
    int p = 15, k =2;
    int y = 1 << k;

    int z = p & y;

    if (z==0) printf("0");
    else printf("1");
}
