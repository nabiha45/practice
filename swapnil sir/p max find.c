#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int *p, *q;
    p = &a;
    q = &b;

    int max1 = max(&a, &b);
    printf("%d", max1);
}
int max(int *p, int *q)
{
     if(*p > *q)
    {
        return *p;
    }
    else
    {
        return *q;
    }
}
