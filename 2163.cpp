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
    int test = 0, a = 0, b = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 42){
                if( arr[i-1][j-1] == 7 && arr[i-1][j] == 7 && arr[i-1][j+1] == 7 && arr[i][j-1] == 7 && arr[i-1][j+1] == 7 && arr[i+1][j-1] == 7 && arr[i+1][j] == 7 && arr[i+1][j+1] == 7 ){
                    test++;
                    a = i;
                    b = j;
                    cout << i + 1 << " " << j + 1 << endl;
                    break;
                }
            }
        }
    }

    if(test == 0){
        cout << "0 0" << endl;
    }

return 0;
}