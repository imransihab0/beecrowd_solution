#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    set<int> _arr(arr, arr+n);
    for(int i:_arr){
        int _size = 0;
        for(int j=0; j<n; j++){
            if(i == arr[j]){
                _size++;
            }
        }
        cout << i << " aparece " << _size << " vez(es)" << endl;
    }
    
return 0;
}