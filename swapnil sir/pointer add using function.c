#include <stdio.h>

int add(int *p, int *q)

{
    int sum1 = 0;
    sum1 = *p+*q;
    return sum1;
}


int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);

    int sum = add(&a, &b);
    printf("sum is %d", sum);

}
