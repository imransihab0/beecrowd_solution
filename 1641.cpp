#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a, b, c, i = 1;
    while(cin >> a){
        if(a == 0){
            break;
        }
        cin >> b >> c;

        double pizza = sqrt( (b*b) + (c*c) ), table = a * 2;
        if(table >= pizza){
            cout << "Pizza " << i << " fits on the table." << endl;
        }else{
            cout << "Pizza " << i << " does not fit on the table." << endl;
        }
    i++;
    }
    
return 0;
}