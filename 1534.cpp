#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    while(cin >> n){
        if(n == 0){
            break;
        }
        if(n%2==0){
            int flag = n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i == j){
                    cout << "1";
                }else if(j == flag){
                    cout << "2";
                    flag--;
                }else{
                    cout << "3";
                }
            }cout << endl;
        }
        }else{
            int flag = n;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i == j && i != ((n/2)+1)){
                    cout << "1";
                }else if(j == flag){
                    cout << "2";
                    flag--;
                }else{
                    cout << "3";
                }
            }cout << endl;
        }
        }
    }


    
return 0;
}