#include <stdio.h>

m = -99999;
int max (int ara[], int n, int i)
{
    if (i == n)
    {
        return m;
    }
        if (ara[i] > m)
        {

            m = ara[i];
        }
    max(ara, n, i+1);
}
int main()
{
    int n, i;
    int ara[4] = {1, 2, 3, 5};
    int l = max(ara, 4, i);
    printf("%d", l);
}
