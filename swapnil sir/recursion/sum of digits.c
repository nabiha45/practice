#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int res = sum(n);
    printf("%d", res);
}
int sum (int x)
{

    if(x == 0) return 1;
    else
    {
        return x%10 + sum(x/10);
    }
}
/*int s = 0;

int sum (int x)
{
    if(x == 0) return s;
    else
    {
        s += x%10;
        sum(x/10);
    }
} */
