#include<stdio.h>
int main(){

int n;
double weight,weight_one,weight_two,weight_three;
scanf("%d",&n);

for(int i=1; i<=n; i++){
    scanf("%lf%lf%lf",&weight_one,&weight_two,&weight_three);
    weight = (weight_one*2 + weight_two*3 + weight_three*5)/10;
    printf("%.1lf\n",weight);
}



return 0;
}