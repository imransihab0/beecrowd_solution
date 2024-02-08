// https://www.beecrowd.com.br/judge/en/problems/view/2168?origem=1
// @author: imransihab0

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    n++;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            int c = 0;

            if(arr[i][j] == 1){
                c++;
            }
            if(arr[i][j+1] == 1){
                c++;
            }
            if(arr[i+1][j] == 1){
                c++;
            }
            if(arr[i+1][j+1] == 1){
                c++;
            }

            if(c>=2){
                cout << "S";
            }else{
                cout << "U";
            }

        }cout << endl;
    }
    
return 0;
}