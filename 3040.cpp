#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        
        int h, d, g;
        cin >> h >> d >> g;

        int temp = 0;
        if(h>=200 && h<=300){
            temp++;
        }
        if(d>=50){
            temp++;
        }
        if(g>=150){
            temp++;
        }

        if(temp == 3){
            cout << "Sim" << endl;
        }else{
            cout << "Nao" << endl;
        }

    }
    
return 0;
}