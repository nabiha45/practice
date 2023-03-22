#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i, c = 0;
    for(i = n; i != 0; i/=10)
    {
        if(i % 10 == 0)
        {
            c++;
        }
    }
    printf("%d", c);
}
