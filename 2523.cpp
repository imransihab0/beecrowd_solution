#include<bits/stdc++.h>
using namespace std;
int main(){
    
string str;
while(cin >> str){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        printf("%c", str[arr[i]-1]);
    }cout << endl;

}
    
return 0;
}