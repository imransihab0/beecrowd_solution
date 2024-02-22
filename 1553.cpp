// https://judge.beecrowd.com/en/problems/view/1553
// @author: imransihab0

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n, k;
    while(cin >> n >> k){
        if(n == 0 && k == 0){
            break;
        }

        int hash[1001] = {0};
        for(int i=0; i<n; i++){
            int p;
            cin >> p;
            hash[p-1]++;
        }
        int t = 0;
        for(int i=0; i<n; i++){
            if(hash[i] >= k){
                t++;
            }
        }

        cout << t << endl;
    }

return 0;
}