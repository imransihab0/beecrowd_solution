#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n, arr[5];
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    int detain  = 0;
    for(int i=0; i<4; i++){
        if(arr[i] < arr[i+1]){
            detain++;
        }else if(arr[i] > arr[i+1]){
            detain--;
        }
    }

    if(detain == 4){
        cout << "C" << endl;
    }else if(detain == -4){
        cout << "D" << endl;
    }else{
        cout << "N" << endl;
    }
    
return 0;
}