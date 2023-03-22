#include <stdio.h>

int main()
{
    char str[101];
    gets(str);

    int cnt =0;
    int freq[26] = {0};

    int i;

    for (i =0; str[i] != '\0'; i++)
    {
        freq[str[i] - 'a'] += 1;
    }

    for (i = 0; i < 26; i++)
    {
        if (freq[i] >= 1)
        {
            cnt++;
        }
    }
   // printf("%d", cnt);

    if (cnt % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
