#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string str;
    while(getline(cin, str)){
        int flag = 1, iFlag = 1;
        for(int i=0; i<str.size(); i++){
            if(str[i] == '*'){
                if(flag%2 == 0){
                    cout << "</b>";
                    flag++;
                }else{
                    cout << "<b>";
                    flag++;
                }
            }else if(str[i] == '_'){
                if(iFlag%2 == 0){
                    cout << "</i>";
                    iFlag++;
                }else{
                    cout << "<i>";
                    iFlag++;
                }
            }else{
                cout << str[i];
            }
        }cout << endl;
    }
    
return 0;
}