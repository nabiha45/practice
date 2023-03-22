#include<stdio.h>
struct
{
char name[20];
int age;
int salary;
} emp1, emp2;

int manager( ){
struct{
char name[20];
int age;
int salary;
} manager;
manager.age = 25;
if(manager.age > 30)

manager.salary = 60000;
else manager.salary = 45000;
return manager.salary;
}
int main() {
emp1.salary = 30000;
emp2.salary = 35000;
printf("%d tk\n", emp1.salary);
printf("%d tk\n", emp2.salary);
printf("%d tk\n", manager());
return 0;
}
