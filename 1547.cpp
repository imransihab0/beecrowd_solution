#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=0; i<n; i++){

        int a, x;
        cin >> a >> x;
        int arr[a], test[a], align_arr[a];

        for(int j=0; j<a; j++){
            cin >> arr[j];
            test[j] = arr[j];
        }

        for(int j=0; j<a; j++){
            int temp = arr[j] - x;
            if(temp<0){
                temp *= (-1);
                test[j] = temp;
                align_arr[j] = temp;
            }else{
                test[j] = temp;
                align_arr[j] = temp;
            }
        }

        for(int j=0; j<a; j++){
            for(int k=j+1; k<a; k++){
                if(align_arr[j] > align_arr[k]){
                    int temp = align_arr[j];
                    align_arr[j] = align_arr[k];
                    align_arr[k] = temp;
                }
            }
        }

        int min = align_arr[0], count  = 0;

        for(int j=0; j<a; j++){
            if(test[j] == min){
                count = j + 1;
                break;
            }
        }

        cout << count << endl;
    
    }

return 0;
}