#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = add(n);
    printf("%d", sum);
}
int add(int x)
{
    if(x == 1)
    {
        return 1;
    }
    return x+add(x-1);
}
