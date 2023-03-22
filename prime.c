#include <stdio.h>

int prime(int n)
{
    int i;

    for (i = 2; i < n; i++)
    {
        if (n %i == 0)
        {
            return 0;
            break;
        }
         else
    {
        return 1;
    }
    }
    return 1;

}
int main()

{
    int n;
    scanf("%d", &n);
    int m = prime(n);

    if (m == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
