// https://judge.beecrowd.com/en/problems/view/2139
// @handle: imransihab0

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    FastIO();
    
    int m, d;
    
    while(cin >> m >> d)
    {

        int daysLeft = 0;

        if(m == 12 && d == 25)
        {
            cout << "E natal!" << endl;
        }
        else if(m == 12 && d == 24)
        {
            cout << "E vespera de natal!" << endl;
        }
        else if(m == 12 && d > 25)
        {
            cout << "Ja passou!" << endl;
        }
        else if(m <= 12)
        {
            for (int i = 1; i < m; i++)
            {
                if(i<8)
                {
                    if(i%2 == 0 && i != 2)
                    {
                        daysLeft += 30;
                    }
                    else if(i%2 != 0)
                    {
                        daysLeft += 31;
                    }
                    else if(i == 2)
                    {
                        daysLeft += 29;
                    }
                }
                else
                {
                    if(i%2 == 0)
                    {
                        daysLeft += 31;
                    }
                    else if(i%2 != 0)
                    {
                        daysLeft += 30;
                    }
                }
            }

            daysLeft += d;
            daysLeft -= 360;
            daysLeft = abs(daysLeft);

            cout << "Faltam " << daysLeft << " dias para o natal!" << endl;

        }

    }
    
return 0;
}