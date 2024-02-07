#include<bits/stdc++.h>
using namespace std;

int toDeci(string s){
    int n = 0;
    reverse(s.begin(), s.end());
    for(int i=0; i<s.size(); i++){
        n += ( (s[i] - '0') * (pow(2, i)));
    }
    return n;
}

int main(){
    
    int n;
    while(cin >> n){
        while(n--){
            string s;
            cin >> s;
            char c = toDeci(s);
            cout << c;
        }cout << endl;
    }
    
return 0;
}