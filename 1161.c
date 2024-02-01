#include<stdio.h>
int main(){
    
    
    int m,n;
    
    while((scanf("%d%d", &m, &n)) != EOF){
        long long int xm=1, xn=1;
        if(m==0){
            xm==1;
        for(int i=1; i<=n; i++){
            xn*=i;
        }
        printf("%lld\n", xm+xn);
        }else if(n==0){
            xn=1;
            for(int i=1; i<=m; i++){
            xm*=i;
        }
        printf("%lld\n", xm+xn);
        }else if(m==0 && n==0){
            printf("2\n");
        }else{
            for(int i=1; i<=m; i++){
            xm*=i;
        }
        for(int i=1; i<=n; i++){
            xn*=i;
        }
        printf("%lld\n", xm+xn);
        }
    }

    
return 0;
}