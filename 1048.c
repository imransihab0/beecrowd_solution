#include<stdio.h>
int main(){

float salary,new_salary,money_earned;
char modules = '%';
scanf("%f",&salary);

if(salary>=0 && salary<=400.00){
    new_salary = salary * 0.15;
    money_earned = salary + new_salary;

    printf("Novo salario: %.2f\n", money_earned);
    printf("Reajuste ganho: %.2f\n", new_salary);
    printf("Em percentual: 15 %c\n",modules);
}else if(salary>=400.01 && salary<=800.00){
    new_salary = salary * 0.12;
    money_earned = salary + new_salary;

    printf("Novo salario: %.2f\n", money_earned);
    printf("Reajuste ganho: %.2f\n", new_salary);
    printf("Em percentual: 12 %c\n",modules);
}else if(salary>=800.01 && salary<=1200.00){
    new_salary = salary * 0.1;
    money_earned = salary + new_salary;

    printf("Novo salario: %.2f\n", money_earned);
    printf("Reajuste ganho: %.2f\n", new_salary);
    printf("Em percentual: 10 %c\n",modules);
}else if(salary>=1200.01 && salary<=2000.0){
    new_salary = salary * 0.07;
    money_earned = salary + new_salary;

    printf("Novo salario: %.2f\n", money_earned);
    printf("Reajuste ganho: %.2f\n", new_salary);
    printf("Em percentual: 7 %c\n",modules);
}else if(salary>2000.0){
    new_salary = salary * 0.04;
    money_earned = salary + new_salary;

    printf("Novo salario: %.2f\n", money_earned);
    printf("Reajuste ganho: %.2f\n", new_salary);
    printf("Em percentual: 4 %c\n",modules);
}


return 0;
}