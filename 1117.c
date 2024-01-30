#include<stdio.h>
int main(){
    int count=0;
    double res=0.0;
    while (1)
    {
        double x;
        scanf("%lf",&x);


        if(x>=0.0 && x<=10.0){
            res+=x;
            count++;
            if(count == 2){
                printf("media = %.2lf\n", res/2);
                break;
            }
        }else{
            printf("nota invalida\n");
            continue;
        }
    }
    
    
return 0;
}