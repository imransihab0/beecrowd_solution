#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    

    while(cin >> n){
    
    if(n == 0){
        break;
    }else{
        int  sumA = 0, sumB = 0;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        if(a>b){
            sumA++;
        }
        if(b>a){
            sumB++;
        }
    }
    cout << sumA << " " << sumB << endl;
    }
    
    }
    
return 0;
}