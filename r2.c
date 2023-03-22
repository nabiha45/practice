#include <stdio.h>

int input(int ara[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    scanf("%d", &ara[i]);
    input(ara, n, i+1);
}
int rev (int ara[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    rev(ara, n, i+1);
    printf("%d ", ara[i]);
}



int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    int i;
    input(ara, n, i);
    rev(ara, n, i);

}
