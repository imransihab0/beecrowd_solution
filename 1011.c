#include<stdio.h>
int main(){

double R;
scanf("%lf", &R);
double pi,volume;
pi = 3.14159;
volume = (4.0/3) * pi * (R*R*R);


printf("VOLUME = %.3lf\n", volume);

    return 0;
}