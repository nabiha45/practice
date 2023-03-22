#include <stdio.h>

int main()
{
    union xyz
    {
        float x;
        char m[10];
    };
    struct std
    {
        char name[60];
        union xyz cse;
        unsigned int m:6;
    }student[200];

    printf("%d ", sizeof(student[200]));
}
