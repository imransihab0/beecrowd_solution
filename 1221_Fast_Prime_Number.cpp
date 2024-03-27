// https://judge.beecrowd.com/en/problems/1221
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int t;
    cin >> t;

    while(t--){

        long long x;
        cin >> x;
        if(x == 0 || x == 1){
            cout << "Not Prime\n";
            continue;
        }

        if(x == 2){
            cout << "Prime\n";
            continue;
        }
        
        int c = 0;
        for(int i=2; i<=sqrt(x); i++){
            if(x%i == 0) c++;
            if(c == 2 ) break;
        }

        if(c >=1) cout << "Not Prime\n";
        else cout << "Prime\n";

    }
    
return 0;
}