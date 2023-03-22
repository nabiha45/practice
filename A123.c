#include <stdio.h>

int fact(int n)
{
    if (n == 0) return 1;
    return n*fact(n-1);

}
int sum (int n, int i)
{
    printf("%d %d\n", n, i);
    if (i == 2) return 1;
    return fact(n) + sum(n-1, ++i);
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int k;
        scanf("%d", &k);

       printf("%d\n", sum(k-1, 0)-1);
       int sum2 = sum(k-1, 1);

        if (sum2 % k == 0)
        {
            printf("%d\n", k-1);
        }
        else
        {
            printf("-1\n");
        }


    }
    return 0;
}
