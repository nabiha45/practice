#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    int a[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for(i = 0; i <n; i++)
    {
        if(a[i] == x)
        {
            printf("%d is here", x);
        }

    }
}
