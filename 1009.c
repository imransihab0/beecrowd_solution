#include<stdio.h>
int main(){

char name;
double fixed_salary, total_sales, total;

scanf("%s", &name);
scanf("%lf", &fixed_salary);
scanf("%lf", &total_sales);

total = fixed_salary + (total_sales * 0.15);
printf("TOTAL = R$ %.2lf\n", total);


    return 0;
}