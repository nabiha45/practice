#include <stdio.h>



struct student
{
    int roll;
    float cgpa;
    char name[20];
};
float f(struct student st[])
{
    float max = -999;
    int i;
    for(i = 0; i < 3; i++)
    {
        if(st[i].cgpa > max)
        {max = st[i].cgpa;
    }
    }
    return max;
}
int main()
{
    struct student st[3];
    int i;
    for(i = 0; i < 3; i++)
    {
        scanf("%d %f", &st[i].roll, &st[i].cgpa);
        getchar();
        gets(st[i].name);
    }
    printf("%f", f(st));

}
