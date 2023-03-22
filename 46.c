#include <stdio.h>

int main()
{

    int ft_marks[10] = {70, 60, 52, 65, 78, 77, 89, 90, 100, 30};
    int st_marks[10] = {60, 75, 60, 80, 55, 60, 65, 70, 80, 95};

    int final_marks[10] ={87, 64, 55, 45, 67, 78, 88, 98, 92, 34};

    int i;

    double total_marks[10];

    for(i = 0; i < 10; i++)
    {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;

    }
    for(i = 0; i < 10; i++)
    {
        printf("%0.1lf\n", total_marks[i]);
    }

    return 0;
}
