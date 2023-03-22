#include <stdio.h>

struct student
{
    char name[100];
    char dept[10];
    int id;
    float cgpa;
    int credit;
};

int main()
{
    struct student std1 = {"Rohan", "CSE", 1, 3.85, 20};
    struct student std2 = {"Enam", "CSE", 2, 3.45, 20};

    printf("%d", std1.id);
printf("%f", std1.cgpa);
printf("%d", std1.credit);
return 0;
}
