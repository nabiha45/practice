#include <stdio.h>

int main()
{
    char a[6] = "abcdef";
    for (int i = 5; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
    return 0;
}
