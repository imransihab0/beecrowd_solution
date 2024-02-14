#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n, x;

    while(cin >> n >> x){
        
        int c = 0, y, z;

        while(n--){
            cin >> y >> z;
            if(y == x && z == 0){
                c++;
            }
        }

        cout << c << endl;

    }
    
return 0;
}