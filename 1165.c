#include<stdio.h>
int main(){
    
    int n,x,count;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &x);
        count = 0;
        for(int j=1; j<=x; j++){
            if(x%j == 0){
                count++;
            }
        }
        if(count == 2){
            printf("%d eh primo\n", x);
        }else{
            printf("%d nao eh primo\n", x);
        }
    }
    
return 0;
}