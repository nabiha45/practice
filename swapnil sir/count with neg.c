#include <stdio.h>

int main()
{
    int n, i, j, x;
    scanf("%d", &n);
    int f1[101] = {0};
    int f2[101] = {0};

    for(i = 0; i < n; i++)

    {
        scanf("%d", &x);
        if(x >= 0) f1[x]++;
        else
        {
            x = -x;
            f2[x]++;
        }
    }
    for(i = 99; i >= 0; i--)
    {
        for(j = 0; j < f2[i]; j++)
        {
            printf("-%d ", i);
        }
    }
    for(i = 0;i < 101; i++)
    {
        for(j = 0; j <f1[i]; j++)
        {
            printf("%d ", i);
        }
    }

}
