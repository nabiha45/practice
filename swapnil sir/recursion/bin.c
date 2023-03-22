#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    return 0;

}
int bin(int x)
{
    if (x == 0)
    {
        return;
    }

        bin(x/2);
        printf("%d", x%2);

}
