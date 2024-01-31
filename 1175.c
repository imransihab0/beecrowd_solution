#include<stdio.h>
int main(){
    
    int N[20];

    for(int i=0; i<20; i++){
        scanf("%d", &N[i]);
    }
    for(int j = 0; j < 10; j++){
        int temp = N[j];
        N[j] = N[19 - j];
        N[19 - j] = temp;
    }
    for(int l=0; l<20; l++){
        printf("N[%d] = %d\n", l, N[l]);
    }
   
return 0;
}