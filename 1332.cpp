#include<bits/stdc++.h>
using namespace std;

bool isThree(string s){
    if(s[0] == 't' && s[1] == 'h' && s[2] == 'r' && s[3] == 'e'){
        return true;
    }else if(s[0] == 't' && s[1] == 'h' && s[2] == 'r' && s[4] == 'e'){
        return true;
    }else if(s[0] == 't' && s[1] == 'h' && s[4] == 'e' && s[3] == 'e'){
        return true;
    }else if(s[0] == 't' && s[4] == 'e' && s[2] == 'r' && s[3] == 'e'){
        return true;
    }else if(s[4] == 'e' && s[1] == 'h' && s[2] == 'r' && s[3] == 'e'){
        return true;
    }
}

int main(){
    
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s.size() <4){
            if( (s[0] == 'o' && s[1] == 'n') || (s[2] == 'e' && s[1] == 'n') || (s[0] == 'o' && s[2] == 'e') ){
            cout << '1' << endl;
        }else if( (s[0] == 't' && s[1] == 'w') || (s[2] == 'o' && s[1] == 'w') || (s[0] == 't' && s[2] == 'o') ){
            cout << '2' << endl;
        }
        }else{
            if(isThree(s)){
                cout << '3' << endl;
            }
        }
    }
    
return 0;
}