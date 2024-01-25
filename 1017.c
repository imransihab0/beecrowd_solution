#include<stdio.h>
int main(){

int hour, speed, spent_distance;
double output;
scanf("%d%d",&hour,&speed);
spent_distance = speed * hour;
output = spent_distance / 12.00;
printf("%.3lf\n",output);

    return 0;
}