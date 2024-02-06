#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n, q;
    while(cin >> n >> q){
        int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr + n);
    reverse(arr, arr + n);

    for(int i=0; i<q; i++){
        int _t;
        cin >> _t;
        cout << arr[_t-1] << endl;
    }
    }
    
return 0;
}