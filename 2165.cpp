// https://judge.beecrowd.com/en/problems/view/2165
// @imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    getline(cin, s);

    int c = 0;
 
    c = s.size();

    if(c <= 140){
        cout << "TWEET" << endl;
    }else{
        cout << "MUTE" << endl;
    }
    
return 0;
}