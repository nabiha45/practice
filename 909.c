#include <stdio.h>


int sum(int a, int b)
{
    int sumofnum;
    sumofnum = a + b;
    return sumofnum;
}
int main()
{
    int a, b, s;
    scanf("%d %d", &a, &b);
    s = sum(a, b);

    printf("%d", s);

}
