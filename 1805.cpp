#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a, b;
    cin >> a >> b;
    a--;
    long long sum = ( ((1LL* b * (b+1))/2) ) - ( ((1LL * a * (a+1))/2) ); 
    cout << sum << endl;
    
return 0;
}