#include <stdio.h>

int main()
{
    double pi = 3.141592658974;
    int *ptr;
    ptr = &pi;

    printf("Value of pi os %lf\n", pi);
    printf("Value of pi %lf\n", *ptr);
    return 0;

}
