#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
    string a, b, sub;
    cin >> a >> b;

    int check, reCheck, size_a = a.size(), size_b = b.size();
    
    if(size_a < size_b){
        cout << "nao encaixa" << endl;
    }else{
    reCheck = size_a - size_b;
    sub = a.substr(reCheck, size_a);

    if(sub == b){
        cout << "encaixa" << endl;
    }else{
        cout << "nao encaixa" << endl;
    }
    }

    }

    
return 0;
}