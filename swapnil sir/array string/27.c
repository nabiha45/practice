#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char a[n];
    gets(a);
    int i, c;
    for(i = 0; i < n; i++)
    {
        printf("%c", a[i]);
        c++;
    }
    printf("%d", c);
}
