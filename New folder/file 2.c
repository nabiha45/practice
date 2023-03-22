#include <stdio.h>



int main()
{

    FILE *ptr = fopen("n1.text", "r");
    int n;
    fscanf(ptr, "%d", &n);
    char s[n][30];
    int i;
    for (i = 0; i < n; i++)
    {
        fscanf("%s", &s[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%s", s[i]);
    }
    fclose(ptr);

    FILE *fptr = fopen("n2.text", "w");
    for (i = 0; i < n; i++)
    {
    fprintf(fptr, "%s\n", s[i]);
    }

}
