#include<bits/stdc++.h>
using namespace std;

void sorting(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

int main(){
    
    int n;
    cin >> n;

    for(int i=0; i<n; i++){

        int x;
        cin >> x;
        int arr[x];
        for(int j=0; j<x; j++){
            cin >> arr[j];
        }

        sorting(arr, x);

        cout << "Case " << i + 1 << ": " << arr[x/2] << endl;

    }
    
return 0;
}