#include<stdio.h>
int main(){

int code_1,unit_1;
int code_2,unit_2;
float price_1,price_2,result;

scanf(" %d %d %f ",&code_1,&unit_1,&price_1);
scanf(" %d %d %f",&code_2,&unit_2,&price_2);
 result= (unit_1*price_1)+(unit_2*price_2);
 

printf("VALOR A PAGAR: R$ %.2f\n",result);
    return 0;
}