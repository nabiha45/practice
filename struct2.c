#include <stdio.h>

struct student
{
    char name[100];
    char dept[10];
    int id;
    float cgpa;
    int credit;
};

void to_print(struct student var, int i)
{
    printf("%s\n", var[i].name);
    printf("%s\n", var[i].dept);
    printf("%d\n", var.id);
    printf("%f\n", var.cgpa);
    printf("%d\n", var.credit);
}

int main()
{
    struct student std[1];
    scanf("%s", &std[1].name);
    scanf("%s", &std[1].dept);
    scanf("%d", &std[1].id);
    scanf("%f", &std[1].cgpa);
    scanf("%d", &std[1].credit);
    to_print(std, 0);
}
