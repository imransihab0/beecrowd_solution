#include<stdio.h>
int main(){
    
    int N[10] , V;
    scanf("%d", &V);
    for(int i=0; i<10; i++){
        N[i] = V;
        V*=2;
    }
    for(int j=0; j<10; j++){
        printf("N[%d] = %d\n", j, N[j]);
    }
   
return 0;
}