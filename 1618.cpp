// https://judge.beecrowd.com/en/problems/view/1618
// @author: imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin >> t;

    while(t--){
        int ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;

        bool flag = false;

        if( (ay <= ry && cy >= ry) && ( bx >= rx && ax <= rx ) ){
            flag = true;
        }

        if(flag){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }

    }
    
return 0;
}