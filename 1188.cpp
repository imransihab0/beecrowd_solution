#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string check;
    cin >> check;
    double arr[12][12];

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> arr[i][j];
        }
    }

    double sum = 0, flag = 0;
    for(int i=7; i<12; i++){
        for(int j=12-i; j<i; j++){
            sum += arr[i][j];
            flag++;
        }
    }

    if(check == "S"){
        cout << fixed << setprecision(1) << sum << endl;
    }else if(check == "M"){
        cout << fixed << setprecision(1) << sum/flag << endl;
    }
    
return 0;
}