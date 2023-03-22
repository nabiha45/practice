#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("%d", n&1);
        n >>= 1;
    }
    return 0;
}


