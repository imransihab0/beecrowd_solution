#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    int count = 0, sunCount = 0;
    for(int i=0; i<n; i++){
        sunCount = 0;
        for(int j=0; j<m; j++){
            if(arr[i][j] != 0){
                sunCount++;
            }
        }
        if(sunCount == m){
            count++;
        }
    }

    cout << count << endl;

return 0;
}