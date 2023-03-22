#include <stdio.h>

int main()
{
    int word =1;
    char c1[1001];

    gets(c1);
    int i;
    for (i =0; c1[i] != '\0'; i++)
    {
        if (c1[i] == ' ')
        {
            word++;
        }
    }
    printf("%d", word);
}
