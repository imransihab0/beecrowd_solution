// https://judge.beecrowd.com/en/problems/view/1542
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    double a, b, c;
    while(1){
        cin >> a >> b >> c;
        if(a == 0) break;

        double _r = ((a*b)/(c-a));
        int r = _r*c;
        if(r == 1){
            cout << r << " pagina" << endl;
        }else{
            cout << r << " paginas" << endl;
        }
    }

    
return 0;
}