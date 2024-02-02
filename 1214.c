#include<stdio.h>

int ave(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans += arr[i];
    }

    return ans/n;
}

int count(int arr[], int n, int ave){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > ave){
            count++;
        }
    }
    return count;
}

int main(){
    
    int m;
    scanf("%d", &m);

    for(int i=0; i<m; i++){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        int ave_ = ave(arr, n);
        int count_ = count(arr, n, ave_);

        float n_f = n*1.00, count_f = count_*1.00;

        printf("%.3f%%\n",(count_f/n_f)*100.00);

    }

    
    
return 0;
}