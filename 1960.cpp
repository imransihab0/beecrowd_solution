#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int num;
    cin >> num;

    while(num != 0 && num < 1000){

        if(num >= 500){
            if(num >= 900 && num < 1000){
                cout << "CM";
                num -= 900;
            }else{
                cout << "D";
                num -= 500;
            }
        }else if(num >= 100 && num < 500){
            if(400 <= num && 500 > num){
                cout << "CD";
                num -= 400;
            }else{
                cout << "C";
                num -= 100;
            }
        }else if(50 <= num && num < 100){
            if(90 < num && 100 > num){
                cout << "XC";
                num -= 90;
            }else{
                cout << "L";
                num -= 50;
            }
        }else if(50 > num && 10 <= num){
            if(num >= 40){
                cout << "XL";
                num -= 40;
            }else{
                cout << "X";
                num -= 10;
            }
        }else if(num < 10 && 5 <= num){
            if(num == 9){
                cout << "IX";
                num -= 9;
            }else{
                cout << "V";
                num -= 5;
            }
        }else{
            if(num >= 4 && num < 5){
                cout << "IV";
                num -= 4;
            }else{
                cout << "I";
                num -= 1;
            }
        }

    }
    cout << endl;
return 0;
}