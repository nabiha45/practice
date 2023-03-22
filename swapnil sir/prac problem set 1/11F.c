#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, mul = 1;

    for (i = n; i  >= 1; i--)
    {
        mul*= i;

        if (i == 1)
        {
            printf("%d = %d", i, mul);
        }
        else
        {
            printf("%d x ", i);
        }
    }

}
