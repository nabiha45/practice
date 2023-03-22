#include <stdio.h>

struct student
{
    char name[100];
    int id;
    float cgpa;
};

void to_print(struct student var)
{
    puts(var.name);
    printf("%d", var.id);
    printf("%f", var.cgpa);
}
int main()
{
    struct student var;
    gets(var.name);
    scanf("%d", &var.id);
    scanf("%f", &var.cgpa);

    to_print(var);
    return 0;
}
