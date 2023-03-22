#include <stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, next = 0, i;
    scanf("%d", &n);
    if(n == 0 || n == 1)
    {
        printf("%d", n);
    }
    else
    {   next = t1+t2;
        for(i = 3; i <= n; i++)
        {
            t1 = t2;
            t2 = next;
            next = t1+ t2;
        }


    }
    printf("%d", t2);
}
