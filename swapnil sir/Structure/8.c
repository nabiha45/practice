#include <stdio.h>


struct student
{
    char name[100];
    int id;
    struct course
    {

        int gpa;
        int credit;
    } c;
    struct birthday
    {
        int day;
        int month;
        int year;
    } b;
};
int maxfind(struct student var1[])
{
    int max = 0;
    int i;
    for(i = 0; i < 3; i++)
    {
        if(var1[i].c.gpa > max)
        {
            max = var1[i].c.gpa;
        }
    }
    return max;
}

int main()
{
    struct student std[3];
    int i;

    for (i = 0; i < 3; i++)
    {
    gets(std[i].name);
    scanf("%d", &std[i].id);
    scanf("%d %d", &std[i].c.gpa, &std[i].c.credit);
    scanf("%d %d %d", &std[i].b.day, &std[i].b.month, &std[i].b.year);
    getchar();
    }


    int m = maxfind(std);


    printf("%d", m);

    for(i = 0; i < 3; i++)
    {
        if(std[i].c.gpa == m)
        {
            puts(std[i].name);
            printf("\n");
    printf("%d\n", std[i].id);
    printf("%d %d\n", std[i].c.gpa, std[i].c.credit);
    printf("%d %d %d\n", std[i].b.day, std[i].b.month, std[i].b.year);
        }
    }



}
