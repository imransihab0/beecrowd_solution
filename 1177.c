#include<stdio.h>
int main(){
    
    int t, count = 0, n[1000];
    scanf("%d", &t);

    for(int i=0; i<1000; i++,count++){
        if(count == t){
            count = 0;
        }
        n[i] = count;
    }

    for(int j=0; j<1000; j++){
        printf("N[%d] = %d\n", j, n[j]);
    }
    
return 0;
}