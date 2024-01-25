#include<stdio.h>
#include<math.h>
int main(){

double x1,y1,x2,y2,p1,p2,distance;
scanf("%lf%lf", &x1, &y1);
scanf("%lf%lf", &x2, &y2);

p1=pow( (x2-x1),2 );
p2=pow( (y2-y1),2 );
distance=sqrt(p1+p2);
printf("%0.4lf\n",distance);
    return 0;
}