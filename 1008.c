#include<stdio.h>
int main(){

int number, work_hour;
float per_hour,salary;

scanf("%d%d",&number,&work_hour);
scanf("%f",&per_hour);

salary = work_hour * per_hour;
printf("NUMBER = %d\n", number);
printf("SALARY = U$ %.2f\n", salary);

    return 0;
}