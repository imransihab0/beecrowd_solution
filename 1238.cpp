// https://www.beecrowd.com.br/judge/en/problems/view/1238?origem=1
// @author: imransihab0

#include<bits/stdc++.h>
using namespace std;

void combine(string a, string b){
    
    int i = 0, j = 0;
    string s;

    while(i<a.size() || j<b.size()){
        if(i<a.size()){
            s.push_back(a[i]);
            i++;
        }
        if(j<b.size()){
            s.push_back(b[j]);
            j++;
        }
    }

    cout << s << endl;

}

int main(){
    
    int n;
    cin >> n;

    while(n--){
        string a, b;
        cin >> a >> b;
        combine(a, b);
    }
    
return 0;
}