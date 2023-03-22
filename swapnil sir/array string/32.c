#include <stdio.h>

int main()
{
    int w = 1;
    char a[10001];
    gets(a);
    int i;
    for(i = 0; a[i] != '\0'; i++)
    {
       if(a[i] == ' ')
       {
           w++;
       }
    }
    printf("%d", w);
}
