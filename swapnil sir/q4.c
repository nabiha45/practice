#include <stdio.h>
#include <string.h>

void fun(char str[], int n, int m)
{
    if(n == m) return;
    int temp;
    temp = str[n];
    str[n]=str[m];
    str[m] = temp;
    fun(str, ++n, --m);
}

int main()
{
    char str[100];
    int l, n, m, i;
    gets(str);
    l = strlen(str);
    n = 0;
    m = l-1;
    fun(str, n, m);

    printf("%s\n", str);
}
