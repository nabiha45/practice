#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for(i = 1; i <= n; i++)
    {
        if(n % 2 == 1)
        {
            if(i % 2 == 1)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        else
        {
            if(i%2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    }
}
