#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    for(i = 0; i <= 9; i++)
    {
        int p = 1 << i;
        int q = n&p;

        if(q == 0) printf("0");
        else

            printf("1");

    }
}
