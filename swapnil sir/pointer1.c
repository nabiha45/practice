#include <stdio.h>

int main()
{
    int a = 5;
    int b = 7;
    {
        int a = 7;
        printf("%d", a);
    }
}
