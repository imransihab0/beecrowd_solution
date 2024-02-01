#include<bits/stdc++.h>
using namespace std;

int main(){

    char ch;
    cin >> ch;
    double m[12][12], sum=0.0;
    
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> m[i][j];
        }
    }

    int o=11;
    for(int i=0; i<11; i++){
        for(int j=0; j<o; j++){
            sum+=m[i][j];
        }
        o--;
    }

    if(ch == 'S'){
        cout << fixed << setprecision(1) << sum << endl;
    }else if(ch == 'M'){
        cout << fixed << setprecision(1) << sum/66.0 << endl;
    }

return 0;
}