#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a, b, c;
    while(cin >> a >> b >> c){
        if(a == 0 && b == 0 && c == 0){
            break;
        }

        int r = cbrt(a * b * c);
        cout << r << endl;

    }
    
return 0;
}