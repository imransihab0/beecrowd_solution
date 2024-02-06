#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, m;
    while(cin >> n >> m){

        if(n == 0 && m == 0){
            break;
        }

        set<int> clone;
        int arr[m];
        for(int i=0; i<m; i++){
            int temp;
            cin >> temp;
            arr[i] = temp;
            clone.insert(temp);
        }

        sort(arr, arr + m);

        int _arr[clone.size()];
        copy(clone.begin(), clone.end(), _arr);
        vector<int> __arr;
        
        set_difference(arr, arr + m, _arr, _arr + clone.size(), back_inserter(__arr));
        set<int> final;
        // set<int> _final(__arr.begin(), __arr.end());
        copy(__arr.begin(), __arr.end(), inserter(final, final.begin()));
        // for(int i=0; i<clone.size(); i++){
        //     for(int j=0; j<m; j++){
        //         if(arr[j] != _arr[i]){
        //             __arr.insert(arr[i]);
        //             continue;
        //         }
        //     }
        // }

        cout << final.size() << endl;
        // cout << "Sorted arr: ";
        // for(int i:arr){
        //     cout << i << " ";
        // }
        // cout << endl << "_arr: ";
        // for(int i:_arr){
        //     cout << i << " ";
        // }
        // cout << endl << "__arr: ";
        // for(int i:final){
        //     cout << i << " ";
        // }
        // cout << endl;

    }
    
return 0;
}