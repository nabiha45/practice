#include <stdio.h>

int main()
{
    FILE *ptr = fopen("Nabiha.txt", "r");


    int a, b, i;
    if (ptr == NULL) printf("No file");
    fscanf(ptr, "%d", &a);
    fprintf(ptr, "%d", a);
}
