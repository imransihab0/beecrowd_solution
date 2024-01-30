#include<stdio.h>
int main(){
    
    int a,n,sum=0;
    scanf("%d%d", &a, &n);
    
    while (n==0 || n<0)
    {
        scanf("%d",&n);
    }

    for(int i=a; i<a+n; i++){
        sum+=i;
    }
    
    printf("%d\n",sum);
    
return 0;
}