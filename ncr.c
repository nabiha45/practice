#include <stdio.h>

int f (int n)
{
    int i;
    int mult = 1;
    for (i = 2; i <= n; i++)


    {
        mult *= i;
    }
    return mult;
}
int c (int n, int r)
{
    int x = f(n);
    int y = f(n-r);
    int z = f(r);
    return x / (y*z);

}
int main()
{
   int z = c (6, 5);
   printf("%d", z);
   return 0;
}
