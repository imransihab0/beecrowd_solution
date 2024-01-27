#include<stdio.h>
int main(){
    double salary,tax;
    scanf("%lf",&salary);

    if(salary>=0.00 && salary<=2000.00){
        printf("Isento\n");
    }else if(salary>=2000.01 && salary<=3000.00){
        tax = (salary - 2000) * 0.08;
        printf("R$ %.2lf\n",tax);
    }else if(salary>=3000.01 && salary<=4500.00){
        tax = (1000 * 0.08) + ((salary - 3000) * 0.18);
        printf("R$ %.2lf\n",tax); 
    }else if(salary>4500){
        tax = (1000 * 0.08) + (1500 * 0.18) + ((salary - 4500) * 0.28);
        printf("R$ %.2lf\n",tax);
    }


return 0;
}