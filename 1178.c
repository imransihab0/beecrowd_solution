#include<stdio.h>
int main(){
    
    double n[100], x;
    scanf("%lf", &x);

    for(int i=0; i<100; i++){
        n[i] = x;
        x/=2;
    }

    for(int j=0; j<100; j++){
        printf("N[%d] = %.4lf\n", j, n[j]);
    }
    
return 0;
}