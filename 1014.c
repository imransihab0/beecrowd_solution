#include<stdio.h>
int main(){

int X;
double Y,res;

scanf("%d%lf", &X, &Y);
res = X/Y;

printf("%.3lf km/l\n", res);


    return 0;
}