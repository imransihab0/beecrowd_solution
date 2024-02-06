#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a, b;
    cin >> a >> b;

    int one = 0, two = 0;
    one = a * b;
    a--;
    b--;
    one +=  a * b;
    two = a + a + b + b;

    cout << one << endl << two << endl;
    
return 0;
}