#include<stdio.h>
int main(){

int input, year, month, day;
scanf("%d", &input);
year = input/365;
month = (input%365)/30;
day = (input%365%30);

printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);


    return 0;
}