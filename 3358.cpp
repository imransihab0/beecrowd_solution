#include<bits/stdc++.h>
using namespace std;

bool isVowel(char s){
    bool flag = false;
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
        flag = true;
    }
    return flag;
}

int main(){
    
    int n;
    cin >> n;

    while(n--){

        string s, cpy;
        cin >> s;
        cpy = s;
        bool _flag = false;
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c){return tolower(c);});

        int count = 0;
        for(int i=0; i<s.size(); i++){
            if(isVowel(s[i])){
                count = 0;
            }else{
                count++;
                if(count == 3){
                    _flag = true;
                    break;
                }
            }
        }
        if(_flag){
            cout << cpy << " nao eh facil" << endl;
        }else{
            cout << cpy << " eh facil" << endl;
        }
    }
    
return 0;
}