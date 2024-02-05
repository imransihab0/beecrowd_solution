#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string a, b, c;
    
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    
    cout << a+b+c << endl;
    cout << b+c+a << endl;
    cout << c+a+b << endl;

    if(a.size() >= 10){
        for(int i=0; i<10; i++){
        cout << a[i];
    }
    }else{
        for(int i=0; i<a.size(); i++){
        cout << a[i];
    }
    }
    if(b.size() >= 10){
        for(int i=0; i<10; i++){
        cout << b[i];
    }
    }else{
        for(int i=0; i<b.size(); i++){
        cout << b[i];
    }
    }
    if(c.size() >= 10){
        for(int i=0; i<10; i++){
        cout << c[i];
    }
    }else{
        for(int i=0; i<c.size(); i++){
        cout << c[i];
    }
    }cout << endl;


    
return 0;
}