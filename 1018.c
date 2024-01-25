#include<stdio.h>
int main(){

int input, note100, note50, note20, note10, note5, note2, note1;
scanf("%d", &input);
note100 = input/100;
note50 = (input%100)/50;
note20 = (input%100%50)/20;
note10 = (input%100%50%20)/10;
note5 = (input%100%50%20%10)/5;
note2 = (input%100%50%20%10%5)/2;
note1 = input%100%50%20%10%5%2;

printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", input, note100, note50, note20, note10, note5, note2, note1);


    return 0;
}