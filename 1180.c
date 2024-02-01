#include<stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    int arr[n], x[n];
    for(int i=0; i<n; i++){
        int m;
        scanf("%d", &m);
        arr[i] = m;
        x[i] = m;
    }
    
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int small = arr[0], count=0;
    for(int i=0; i<n; i++){
        if(x[i] == small){
            break;
        }
        count++;
    }
    printf("Menor valor: %d\nPosicao: %d\n", small, count);
    
return 0;
}