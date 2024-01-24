#include<stdio.h>
#include<math.h>
int main(){

double a,b,c,D,R1,R2;
scanf("%lf%lf%lf", &a,&b,&c);

D =  (b*b) - (4*a*c);

R1 = ( (-1*b) + sqrt(D) )/(2*a);
R2 = ( (-1*b) - sqrt(D) )/(2*a);


if( a==0 ){
    printf("Impossivel calcular\n");
}else if( D<0 ){
    printf("Impossivel calcular\n");
}else{
    printf("R1 = %.5lf\n", R1);
    printf("R2 = %.5lf\n", R2);
}

    return 0;
}