#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a, b, c, _a, _b, _c;
    cin >> a >> b >> c;
    cin >> _a >> _b >> _c;
    int total = 0;
    if(a < _a){
        total += (_a - a);
    }
    if(b < _b){
        total += (_b - b);
    }
    if(c < _c){
        total += (_c - c);
    }
    cout << total << endl;
    
return 0;
}