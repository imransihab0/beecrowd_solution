#include<bits/stdc++.h>
using namespace std;

void count(){
    double x, final=0.0;
    int count=0;
    while(1){
        cin >> x;
        if(x>0 && x<=10){
            final += x;
            count++;
            if(count==2){
                break;
            }
        }else{
        cout << "nota invalida" << endl;
        }      
    }
    cout << "media = " << fixed << setprecision(2) << final/2.00 << endl;
}

int main(){
    int ask;
    count();
    while(1){
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> ask;
        if(ask == 2){
            break;
        }else if(ask == 1){
            count();
        }else{
            continue;
        }
    }
    
return 0;
}