#include <stdio.h>

struct abc
{
    char name[20];
    int roll;
    int marks;
};

int main()
{
    struct abc var ={"Shams", 1, 20};
    struct abc *ptr = &var;

    printf("%s %d %d", ptr->name, ptr->roll, ptr->marks);
    return 0;
}
