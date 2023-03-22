#include <stdio.h>

int main()
{
    int num, n;
    int lastdigit, i;
    int freq[10];

    scanf("%d", &num);

    for (i = 0; i < 10; i++)
    {
        freq[i] = 0;
    }
    n = num;

    while (n != 0)
    {
        lastdigit = n % 10;
        n /= 10;
        freq[lastdigit]++;

    }

    for (i = 0; i < 10; i++)
    {
        printf("%d", freq[i]);
    }
}
