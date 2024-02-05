#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string arr[2];
    cin >> arr[0];
    cin >> arr[1];

    sort(arr, arr + 2);

    cout << arr[0] << "\n" << arr[1] << endl;
    
return 0;
}