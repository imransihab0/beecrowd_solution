#include<iostream>
using namespace std;

int main(){
    
    while(1){
        int a, b;
    cin >> a >> b ;

    if( a==0 && b==0 ){
        break;
    }else{
        int divisor = 10, collector_a, collector_b, temp_a = 0, temp_b = 0, ini = 0, count = 0;

    while(a>0 || b>0){
        collector_a = a % divisor;
        collector_b = b % divisor;

        if(ini==0){
            if( (collector_a + collector_b) >=10 ){
            count++;
            ini++;
        }
        }else{
            if( (collector_a + collector_b + 1) >=10 ){
            count++;
        }else{
            ini = 0;
        }
        }

        a /= 10;
        b /= 10;
    }

    if(count == 0){
        cout << "No carry operation.\n";
    }else if(count == 1){
        cout << count << " carry operation.\n";
    }else{
        cout << count << " carry operations.\n";
    }

    }
    
    }

return 0;
}