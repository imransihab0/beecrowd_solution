#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    getline(cin, s);

    int l = s.size();

    if(l <= 80){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
return 0;
}