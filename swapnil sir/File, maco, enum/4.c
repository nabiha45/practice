#include <stdio.h>

int main()
{
    FILE *fptr1, *fptr2;
    char a[1001];
    gets(a);

    fptr1 = fopen ("nabiha.txt", "r");
    if(fptr1 == NULL)
    {
        printf("No");
    }


    fptr2 = fopen ("nabiha2.txt", "w");

    fprintf(fptr2, "%s", a);
}
