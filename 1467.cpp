#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a, b, c;
    while(cin >> a >> b >> c){
        int alice, bob, cray, tri;
        alice = a - b - c;
        bob = b - a - c;
        cray = c - a - b;
        tri = a + b + c;

        if(tri == 3 || tri == 0){
            cout << "*" << endl;
        }else if(alice == 1 || alice == -2){
            cout << "A" << endl;
        }else if(bob == 1 || bob == -2){
            cout << "B" << endl;
        }else if(cray == 1 || cray == -2){
            cout << "C" << endl;
        }

    }
    
return 0;
}