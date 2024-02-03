#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n, h, c, l;
    while(cin >> n >> h >> c >> l){
        double a = n * ( sqrt( (h * h) + (c * c) ) );
        double b = l, ans;
        ans = ( a * b ) / 10000;
        printf("%.4lf\n", ans);
    }
    
return 0;
}