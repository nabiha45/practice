#include <stdio.h>

struct employee
{
    char name[20];
    int age;
    int salary;
};

int manager()
{
    struct employee manager;
    manager.age = 25;
    if(manager.age > 30)
        manager.salary = 60000;
    else manager.salary = 45000;
    return manager.salary;
}
int main()
{
    struct employee emp1, emp2;
    emp1.salary = 30000;
    emp2.salary = 35000;
    printf("%d\n", emp1.salary);
    printf("%d\n", emp2.salary);
    printf("%d\n", manager());
}
