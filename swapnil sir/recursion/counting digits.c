#include <stdio.h>

int c = 0;

int count (int n)
{
    if(n == 0) return c;



            c++;
            return count(n/10);
}
int main()
{
    int n;
    scanf("%d", &n);
    int c = count(n);
    printf("%d", c);
}
