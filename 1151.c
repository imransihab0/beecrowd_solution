#include<stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);

    unsigned long long a=0, b=1, res=0;
    
    if(n==1){
        printf("%d\n", a);
    }else if(n>1){
        printf("%d 1",a);
        for(int i=2; i<n; i++){
        res = a+b;
        a = b;
        b = res;
        printf(" %llu", res);
    }
    }
printf("\n");
return 0;
}