#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int _a, _b;
    _a = max(a, b) + min(c, d);
    _b = min(a, b) + max(c, d);

    int _c = _a - _b;
    if(_c<0){
        _c *= -1;
    }

    cout << _c << endl;
    
return 0;
}