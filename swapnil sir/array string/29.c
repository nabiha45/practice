#include <stdio.h>

int main()
{
    int i, j;
    char a[1000];
    char b[10001];
    gets(a);
    gets(b);

    j = strlen(b);
    int k;
    for(i = 0; b[i] != '\0'; i++)

    {
        a[i+j] = b[i];
    }
    a[i+j] = '\0';
    printf("%s", a);
}
