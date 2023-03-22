#include <stdio.h>

int main()
{
    char s1[1001];
    char s2[1001];
    gets(s1);
    gets(s2);
    int sum = 0;

    int i;

        sum = s1[0] + s2[0] - '0';

    printf("%d", sum);
}
