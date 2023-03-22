#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, c = 0;
    for(i = n; i != 0; i/=10)
    {
        c++;
    }
    printf("%d", c);
}
