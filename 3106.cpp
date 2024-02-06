#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    int arr[n], sum = 0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    int toMin = 0;
    for(int i=0; i<n; i++){
        toMin += (arr[i]%3);
    }

    cout << sum - toMin << endl;
    
return 0;
}