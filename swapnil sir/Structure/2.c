#include <stdio.h>

struct student
{
    char name[100];
    char dept[100];
    int id;
    float cgpa;
    int credit;
};
int main()
{
    struct student std;
    gets(std.name);
    gets(std.dept);
    scanf("%d", &std.id);
    scanf("%f", &std.cgpa);
    scanf("%d", &std.credit);

    puts(std.name);
    puts(std.dept);
    printf("%d", std.id);
printf("%f", std.cgpa);
printf("%d", std.credit);
return 0;
}
