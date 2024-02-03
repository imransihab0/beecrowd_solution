#include<bits/stdc++.h>
#define pi 3.1415
using namespace std;
int main(){
    
    int r, l;
    cin >> r >> l;

    double area = (4.0/3.0) * pi * r * r * r;
    int res = l/area;
    
    cout << res << endl;
    
return 0;
}