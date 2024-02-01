#include<stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    int x[n], arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &x[i]);
        arr[i] = x[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int temp;
            if(x[i] > x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    int small = x[0], count=0;
    for(int i=0; i<n; i++){
        count++;
        if(arr[i] == small){
            break;
        }
    }

    printf("%d\n", count);
    
return 0;
}