#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin, s);

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        vector<int> v(26, 0);
        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                v[s[i] - 'a']++;
            }
        }

        int max = *max_element(v.begin(), v.end());
        for(int i=0; i<26; i++){
            if(v[i] == max){
                cout << (char)(i + 'a');
            }
        }cout << endl;

    }   
    
return 0;
}