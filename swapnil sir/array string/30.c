#include <stdio.h>

int main()
{
    char a[10001];
    char b[10001];
    char temp;
    gets(a);
    int i;
    int l = strlen(a);
    int j = 0;

    for(i = l-1; i >= 0; i--)
    {
        temp = a[i];
        b[j++] = temp;

    }
    b[j] = '\0';
    for(i = 0; a[i] != '\0'; i++)
    {
       a[i] = a[i] -32;
    }
    for(i = 0; a[i] != '\0'; i++)
    {
       printf("%c", a[i]);
    }
}
