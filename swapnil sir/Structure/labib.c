#include <stdio.h>
#include <math.h>

double calc(int x, double y, double z);



int main()

{
    int cost, down, n;
    double r;

    printf("CALCULATE LOAN PAYMENT: \n");
    printf("Enter cost of car: ");
    scanf("%d", &cost);
    printf("\n");

    printf("Enter down payment: ");
    scanf("%d", &down);
    printf("\n");

    printf("Enter annual rate of interest: ");
    scanf("%lf", &r);
    printf("\n");

    printf("Enter number of payments: ");
    scanf("%d", &n);
    printf("\n");

    int p = cost - down;
    double i = r / 12.0;
    double prod = pow(1+i, n);
    double ans = calc(p, prod, i);
    if(ans < 0) ans = (-1)*ans;


    printf("Your monthly payment is: $%0.2lf", ans);

}
double calc(int x, double y, double z)
{
    double a = x*(z*y) / (1-y);
    return a;
}
