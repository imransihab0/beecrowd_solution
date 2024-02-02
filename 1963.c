#include<stdio.h>
int main(){
    
    double x, y, a, b, sub, r;
    char p = '%';
    scanf("%lf %lf", &a, &b);
    if(a>b){
        y=a;
        x=b;
    }else{
        y=b;
        x=a;
    }

    sub = y - x;
    r = (sub * 100.00)/x;
    printf("%.2lf%c\n", r, p);
    
return 0;
}