#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    int arr[n];
    vector<int> even, odd;
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if((arr[i]%2) == 0){
            even.push_back(arr[i]);
        }else{
            odd.push_back(arr[i]);
        }
    }

    sort(even.begin(), even.end());
    for(int i:even){
        cout << i << endl;
    }

    sort(odd.begin(), odd.end());
    reverse(odd.begin(), odd.end());
    for(int i:odd){
        cout << i << endl;
    }
        
return 0;
}