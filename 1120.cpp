#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s1, s2;
    while(cin >> s1 >> s2){
        if(s1 == "0" && s2 == "0"){
            break;
        }
        vector<char> mainString(0);        
        for(int i=0; i<s2.size(); i++){
            if(s2[i] != s1[0]){
                mainString.push_back(s2[i]);
            }
        }

        int count = 0;
        for(auto i:mainString){
            if(i == '0'){
                count++;
            }
        }

        // vector<char> printString;
        // bool flag = false;
        // for(auto i:mainString){
        //     if(i == '0' && flag == false){
        //         flag == false;
        //     }else{
        //         printString.push_back(i);
        //         flag == true;
        //     }
        // }

        auto fnz = find_if(mainString.begin(), mainString.end(), [](char c) {
            return c != '0';
        });

        mainString.erase(mainString.begin(), fnz);

        if(count == mainString.size() || mainString.empty() == true){
            cout << '0' << endl;
        }else{
            for(auto i:mainString){
            cout << i;
        }cout << endl;
        }

    }
    
return 0;
}