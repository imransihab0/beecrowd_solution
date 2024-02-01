#include<stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        long long int x, a=0, b=1, res=0, count=0;
    scanf("%lld", &x);
    if(x==0){
        printf("Fib(0) = 0\n");
    }else if(x==1 || x==2){
        printf("Fib(%lld) = 1\n", x);
    }else{
        while(x-1>0){
        count++;
        res = a+b;
        a=b;
        b=res;
        x--;
    }
    printf("Fib(%lld) = %lld\n", count+1, res);
    }
    }    

    
return 0;
}