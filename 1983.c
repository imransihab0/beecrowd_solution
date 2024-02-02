#include<stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    int left[n];
    double right[n], tempr[n];

    for(int i=0; i<n; i++){
        scanf("%d %lf", &left[i], &right[i]);
        tempr[i] = right[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            double temp;
            if(right[i] < right[j]){
                temp = right[i];
                right[i] = right[j];
                right[j] = temp;
            }
        }
    }

    if(right[0]>=8.0){
        for(int i=0; i<n; i++){
            if(right[0] == tempr[i]){
                printf("%d\n", left[i]);
                break;
            }
        }
    }else{
        printf("Minimum note not reached\n");
    }
    
return 0;
}