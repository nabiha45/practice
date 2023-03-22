#include <stdio.h>

int checkprime(int i, int j)
{
    int j, flag = 1;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
    for (j = 2; j < i/2; j++)
    {

        if (i % j == 0)
        {
            flag = 0;
            break;
        }
    }
    }
    return flag;
}
int main()
{
    int n1, c, i;
    c = 0;
    scanf("%d", &n1);

    int m = checkprime(j);
    if (m == 1)
    {
        c++;
    }
   printf("%d", c);
}
