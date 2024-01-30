#include<stdio.h>
int main(){
    
    int m,n,a,b;
    while(1){
        int sum = 0;
        scanf("%d%d", &m, &n);

        if(m>n){
            a=m;
            b=n;
        }else if(n>m){
            a=n;
            b=m;
        }
        if(m==0 || n==0 || n<0 || m<0){
            break;
        }

        for(int i=b; i<=a; i++){
            sum += i;
            printf("%d ",i);
        }

        printf("Sum=%d\n", sum);

    }
    
    
return 0;
}