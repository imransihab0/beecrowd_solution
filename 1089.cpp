// https://judge.beecrowd.com/en/problems/view/1089
// @author: imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;

    while(cin >> t && t != 0){

        int c = 0;
        int arr[t];
        
        for(int i=0; i<t; i++){
            cin >> arr[i];
        }
        
        for(int i=1; i<t-1; i++){
            if(((arr[i-1] < arr[i]) && (arr[i+1] < arr[i])) || ((arr[i-1] > arr[i]) && (arr[i+1] > arr[i]))){
                c++;
            }
        }

        if((arr[0] < arr[t-1] && arr[0] < arr[1]) || (arr[0] > arr[t-1] && arr[0] > arr[1])){
            c++;
        }
        if((arr[t-1] < arr[0] && arr[t-1] < arr[t-2]) || (arr[t-1] > arr[0] && arr[t-1] > arr[t-2])){
            c++;
        }

        cout << c << endl;
        
    }
    
return 0;
}