#include<stdio.h>
int main(){
    
    int n;
    while((scanf("%d", &n)) != EOF){
        double x[n];
    for(int i=0; i<n; i++){
        scanf("%lf", &x[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            double temp;
            if(x[i] > x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    printf("%.2lf\n", x[0]);
    }
    
return 0;
}