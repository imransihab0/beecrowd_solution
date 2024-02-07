#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    cin.ignore();

    while (n--){
        string s;
        getline(cin, s);

        sort(s.begin(), s.end());

        set<char> st;
        for(auto& i:s){
            if(isalpha(i)){
                st.insert(i);
            }
        }

        if(st.size() == 26){
            cout << "frase completa" << endl;
        }else if(st.size() < 26 && st.size() >= 13){
            cout << "frase quase completa" << endl;
        }else{
            cout << "frase mal elaborada" << endl;
        }
    }
       
return 0;
}