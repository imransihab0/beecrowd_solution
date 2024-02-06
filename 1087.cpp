#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int x, y, _x, _y;
    while(cin >> x >> y >> _x >> _y){
        if(x == 0 && y == 0 && _x == 0 && _y == 0){
            break;
        }

        int a = x - _x, b = y - _y;
        if(a<0){
            a*=-1;
        }
        if(b<0){
            b*=-1;
        }

        if(x == _x && y == _y){
            cout << 0 << endl;
        }else if( (x == _x) && (y != _y) ){
            cout << 1 << endl;
        }else if( (x != _x) && (y == _y) ){
            cout << 1 << endl;
        }else if(a == b){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }

    }
    
return 0;
}