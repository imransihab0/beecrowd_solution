#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    cin.ignore();

    while(n--){
        string s;
        getline(cin, s);

        int l = s.size();

        for(int i=(l/2)-1; i>=0; i--){
            cout << s[i];
        }
        for(int i=l-1; i>=l/2; i--){
            cout << s[i];
        }cout << endl;
    }
    
return 0;
}