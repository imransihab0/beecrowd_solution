// https://judge.beecrowd.com/en/problems/view/1029
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int c;
int fib(int n)
{
    c++;
    if(n == 0 || n == 1) return n;
    else return fib(n-2) + fib(n-1);
}

int32_t main(){
    FastIO();
    
    int t;
    cin >> t;

    while(t--)
    {
        int x, _r;
        cin >> x;
        c = 0;
        _r = fib(x);
        cout << "fib(" << x << ") = " << c-1 << " calls = " << _r << endl;
    }
    
return 0;
}