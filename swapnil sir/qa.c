#include <stdio.h>
#include <math.h>

int check(int r, int k, int b[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(r+k == b[i])
        {
            return 1;
        }
    }
}
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    int b[n];


    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        b[i] = pow(a[i], 2);
    }


    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n-1; j++)
        {
            int r = pow(a[i], 2);
            int k = pow(a[j], 2);
            int flag = check(r, k, b, n);
            if (flag == 1)
            {
                printf("%d %d", a[i], a[j]);
            }
        }
    }



}
