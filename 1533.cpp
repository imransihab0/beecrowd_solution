#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;

    while(cin >> n){

        if(n == 0){
            break;
        }

        int arr[n], real[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
            real[i] = arr[i];
        }

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i] < arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for(int i=0; i<n; i++){
            if(real[i] == arr[1]){
                cout << i + 1 << endl;
                break;
            }
        }
    }
    
return 0;
}