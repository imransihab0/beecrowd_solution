#include<stdio.h>
int main(){
    
    int n, count=0;
    scanf("%d", &n);
    
    if(n==1){
        printf("Ho!\n");
    }else if(n>1){
        printf("Ho");
    for(int i=0; i<n; i++){
        count++;
        printf(" Ho");
        if(count==n-1){
            printf("!\n");
            break;
        }
    }
    }
    
return 0;
}