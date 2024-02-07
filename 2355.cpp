#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    
    while(cin >> n && n != 0){
        double a = n/90.0;
        int b, g;
        b = floor(a*1);
        g = ceil(a*7);
        cout << "Brasil " << b << " x Alemanha " << g << endl;
    }
    
return 0;
}