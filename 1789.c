#include<stdio.h>
int main(){
    
    int n;
    while( (scanf("%d", &n)) != EOF ){
        int x[n];
        for(int i=0; i<n; i++){
            scanf("%d", &x[i]);
        }

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(x[i] < x[j]){
                    int temp;
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
            }
        }

        if(x[0] < 10){
            printf("1\n");
        }else if(x[0] >= 10 && x[0] < 20){
            printf("2\n");
        }else if(x[0] >= 20){
            printf("3\n");
        }
        
    } 
return 0;
}