// https://judge.beecrowd.com/en/problems/view/1837
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int a, b, q, x, i;
    cin >> a >> b;
    
    if(a<0)
    {
        for(i=0; i<abs(b); i++)
        {
            x = a - i;
            if(x%b == 0) break;
        }
        q = x/b;    
    }
    else
    {
        q = a/b;
        i = a%b;
    }

    cout << q << " " << i << endl;
    
return 0;
}