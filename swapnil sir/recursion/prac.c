#include <stdio.h>

int main()
{
    f(5);
}

void f(int n)
{
    if(n == 0) return;

    f(n-1);
    printf("%d", n);

}
