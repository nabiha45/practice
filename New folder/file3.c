#include <stdio.h>

int main()
{
    int a;

    FILE *ptr = fopen("Nabiha.txt", "r");

    if (ptr == NULL) printf("No file");

    fscanf(ptr, "%d", &a);

    fclose(ptr);

    FILE *fptr = fopen("hello.txt", "w");

    fprintf(fptr, "HELLO");

    fclose(fptr);


}
