#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    while (n--)
    {
        char a1[10];
        int j, sum;
        sum = 0;
        gets(a1);
        int i;


             sum = a1[0] + a1[2] - '0' - '0';


        printf("%d\n", sum);
    }
    return 0;
}
