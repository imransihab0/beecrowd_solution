#include<stdio.h>
int main(){
    
    int p;
    double res;
    scanf("%d", &p);
    for(int i=0; i<p; i++){
        double a=1.50, b=2.5, c=3.5, d=4.5, e=5.5;
    int x;
    double n;
    scanf("%d %lf", &x, &n);

    if(x == 1001){
        res += a*n;
    }else if(x == 1002){
        res += b*n;
    }else if(x == 1003){
        res += c*n;
    }else if(x == 1004){
        res += d*n;
    }else if(x == 1005){
        res += e*n;
    }
    }
    printf("%.2lf\n", res);
    
return 0;
}