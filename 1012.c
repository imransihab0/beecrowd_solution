#include<stdio.h>
int main(){

double a,b,c,triangle,circle,trapezium,square,rectangle;
scanf("%lf%lf%lf",&a,&b,&c);
triangle = 0.5 * a * c;
circle = 3.14159 * c * c;
trapezium = 0.5 * ( a + b ) * c;
square = b * b;
rectangle = a * b;

printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangle,circle,trapezium,square,rectangle);

    return 0;
}