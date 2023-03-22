#include <stdio.h>

int main()
{
    FILE *fptr1, *fptr2;

    fptr1 = fopen("nabiha.txt", "r");
    char c[1001];
    fgets(c, 100, fptr1);
    int i;
    for(i = 0; c[i] != '\0'; i++)
    {   if(c[i] >= 'A' && c[i] <= 'Z')
    {
        c[i] = c[i] + 32;
    }
    }

    fptr2 = fopen("nabiha2.txt", "w");
    fprintf(fptr2, "%s", c);
}


