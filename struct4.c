#include <stdio.h>
int m = -999999;

struct student
{
    char name[100];
    int id;
    int level;
    int term;

struct course
{
    char name1[100];
    float gpa;
    int credit;
} sub;
    float cgpa;
   struct birth
    {
        int d;
        int m;
        int y;
    } d1;
};

int max(struct student d2, int i, int n)
{
    if(i == n) return m;
    if (d2[i].cgpa > m)
    {
        m = d2[i].cgpa;
    }
    max(d2, ++i, n);
}




int main()
{
    int i, n;
    scanf("%d", &n);
    struct student var[n];



    for (i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", &var[i].name, &var[i].id, &var[i].level, &var[i].term);
        scanf("%s %f %d", var[i].sub.name1, &var[i].sub.gpa, &var[i].sub.credit);
        scanf("%f", &var[i].cgpa);
        scanf("%d %d %d", &var[i].d1.d, &var[i].d1.m, &var[i].d1.y);

    }
    for (i=0; i < n; i++)
    {
        printf("%s %d %d %d\n", var[i].name, var[i].id, var[i].level, var[i].term);
        printf("%s %f %d\n", var[i].sub.name1, var[i].sub.gpa, var[i].sub.credit);
        printf("%f\n", var[i].cgpa);
        printf("%d %d %d\n", var[i].d1.d, var[i].d1.m, var[i].d1.y);
    }
    int l = max(var, 0, n);
    printf("%d\n", l);

}
