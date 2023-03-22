#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0) return b;
    return gcd(b%a, a);
}
int main()
{
    int a = 25, b = 60;

    printf("%d", gcd(25, 60));

}
