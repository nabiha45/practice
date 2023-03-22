#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        return n%10+sum(n/10);
    }
}

int main()
{
    int n = 123;
    int m = sum(n);

    printf("%d", m);
}
