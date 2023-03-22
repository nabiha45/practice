#include <stdio.h>

int numprint(int a)
{
    if (a <= 50)
    {
        printf(" %d ", a);
        numprint(a+1);
    }
}
int main()
{
    int n = 1;
    numprint(n);
    printf("\n");
    return 0;
}
