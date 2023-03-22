#include <stdio.h>

int main()
{
    int n, freq[101] = {0}, x;
    int i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        freq[x]++;
    }
    for(i = 0; i < 101; i++)
    {
        for(int j = 0; j < freq[i]; j++)
        {
            printf("%d ", i);
        }
    }
}
