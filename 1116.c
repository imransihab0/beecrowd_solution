#include<stdio.h>
int main(){

    int n,x,y;
    double division;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d%d", &x, &y);
        if(y != 0){
            division = x/(y*1.0);
            printf("%.1lf\n",division);
        }else{
            printf("divisao impossivel\n");
        }
    }


    
return 0;
}