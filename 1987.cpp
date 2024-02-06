#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n, m;
    while(cin >> n >> m){

        int sum = 0;
        while(m>0){
            int temp = m%10;
            sum += temp;
            m /= 10;
        }
        
        if(sum%3 == 0){
            cout << sum << " sim" << endl;
        }else{
            cout << sum << " nao" << endl;
        }

    }
        
return 0;
}