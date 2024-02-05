#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string str;
    while(getline(cin, str)){
        
        for(int i=0; i<str.size(); i++){
            if( (str[i] == ',' || str[i] == '.') && str[i-1] == ' ' ){
                str.erase(str.begin() + i-1);
            }
        }
        cout << str << endl;
    
    }
    
return 0;
}